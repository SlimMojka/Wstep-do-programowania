#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Kontrahent
{
    string nazwa;
    string adres;
    string NIP;

    void wczytaj(const string& kto)
    {
        cout << "\n--- Dane: " << kto << " ---\n";
        cout << "Nazwa: ";
        getline(cin, nazwa);
        cout << "Adres: ";
        getline(cin, adres);
        cout << "NIP: ";
        getline(cin, NIP);
    }

    void wypisz(const string& kto) const
    {
        cout << kto << ":\n";
        cout << "  Nazwa: " << nazwa << "\n";
        cout << "  Adres: " << adres << "\n";
        cout << "  NIP:   " << NIP << "\n";
    }
};

struct PozycjaFaktury
{
    string nazwa;
    float ilosc = 0.0f;
    float cena_netto = 0.0f;
    float stawka_vat = 0.0f; // np. 0.23

    void wczytaj(int nr)
    {
        cout << "\nPozycja #" << nr << "\n";
        cout << "Nazwa towaru/uslugi: ";
        getline(cin, nazwa);

        cout << "Ilosc: ";
        cin >> ilosc;

        cout << "Cena netto (za szt.): ";
        cin >> cena_netto;

        cout << "Stawka VAT (np. 0.23 dla 23%): ";
        cin >> stawka_vat;

        cout << "\n";
    }

    float netto() const
    {
        return ilosc * cena_netto;
    }

    float vatKwota() const
    {
        return netto() * stawka_vat;
    }

    float brutto() const
    {
        return netto() * (1.0f + stawka_vat);
    }
};

struct Faktura
{
    int numer_faktury = 0;
    string data_wystawienia;
    string data_sprzedazy;

    Kontrahent sprzedawca;
    Kontrahent nabywca;

    PozycjaFaktury pozycje[10];
    int liczba_pozycji = 0;

    float suma_netto = 0.0f;
    float suma_vat = 0.0f;
    float suma_brutto = 0.0f;

    void wczytaj()
    {
        cout << "=== Tworzenie faktury ===\n";
        cout << "Numer faktury: ";
        cin >> numer_faktury;
        cout << "\n";

        cout << "Data wystawienia: ";
        getline(cin, data_wystawienia);

        cout << "Data sprzedazy: ";
        getline(cin, data_sprzedazy);

        sprzedawca.wczytaj("Sprzedawca");
        nabywca.wczytaj("Nabywca");

        cout << "\nIle pozycji chcesz dodac? (1-10): ";
        cin >> liczba_pozycji;
        if (liczba_pozycji < 1) liczba_pozycji = 1;
        if (liczba_pozycji > 10) liczba_pozycji = 10;
        cout << "\n";

        for (int i = 0; i < liczba_pozycji; i++)
            pozycje[i].wczytaj(i + 1);

        przeliczSumy();
    }

    void przeliczSumy()
    {
        suma_netto = 0.0f;
        suma_vat = 0.0f;
        suma_brutto = 0.0f;

        for (int i = 0; i < liczba_pozycji; i++)
        {
            suma_netto += pozycje[i].netto();
            suma_vat += pozycje[i].vatKwota();
            suma_brutto += pozycje[i].brutto();
        }
    }

    void wypisz() const
    {
        cout << "\n\n=========== FAKTURA ===========\n";
        cout << "Numer: " << numer_faktury << "\n";
        cout << "Data wystawienia: " << data_wystawienia << "\n";
        cout << "Data sprzedazy:   " << data_sprzedazy << "\n\n";

        sprzedawca.wypisz("Sprzedawca");
        cout << "\n";
        nabywca.wypisz("Nabywca");

        cout << "\n--- Pozycje ---\n";
        cout << left
             << setw(3)  << "#"
             << setw(25) << "Nazwa"
             << right
             << setw(8)  << "Ilosc"
             << setw(12) << "Netto"
             << setw(8)  << "VAT"
             << setw(12) << "Brutto"
             << "\n";

        cout << string(80, '-') << "\n";

        cout << fixed << setprecision(2);
        for (int i = 0; i < liczba_pozycji; i++)
        {
            cout << left
                 << setw(3)  << (i + 1)
                 << setw(25) << pozycje[i].nazwa
                 << right
                 << setw(8)  << pozycje[i].ilosc
                 << setw(12) << pozycje[i].netto()
                 << setw(8)  << (pozycje[i].stawka_vat * 100.0f)
                 << setw(12) << pozycje[i].brutto()
                 << "\n";
        }

        cout << string(80, '-') << "\n";
        cout << "Suma netto:  " << suma_netto << "\n";
        cout << "Suma VAT:    " << suma_vat << "\n";
        cout << "Suma brutto: " << suma_brutto << "\n";
        cout << "================================\n";
    }

    void modyfikuj()
    {
        cout << "\nKtora pozycje chcesz zmienic? (1-" << liczba_pozycji << "): ";
        int nr;
        cin >> nr;
        cout << "\n";

        if (nr < 1 || nr > liczba_pozycji)
        {
            cout << "Niepoprawny numer pozycji.\n";
            return;
        }

        pozycje[nr - 1].wczytaj(nr);
        przeliczSumy();
        cout << "Pozycja zaktualizowana.\n";
    }
};

int main()
{
    Faktura f;
    f.wczytaj();

    int wybor;
    do
    {
        cout << "\nMENU:\n";
        cout << "1 - Wyswietl fakture\n";
        cout << "2 - Zmodyfikuj pozycje\n";
        cout << "3 - Przelicz sumy\n";
        cout << "0 - Wyjdz\n";
        cout << "Wybor: ";
        cin >> wybor;

        cout << "\n";

        switch (wybor)
        {
        case 1:
            f.wypisz();
            break;
        case 2:
            f.modyfikuj();
            break;
        case 3:
            f.przeliczSumy();
            cout << "Sumy przeliczone.\n";
            break;
        case 0:
            cout << "Koniec.\n";
            break;
        default:
            cout << "Nieznana opcja.\n";
        }

    } while (wybor != 0);

    return 0;
}

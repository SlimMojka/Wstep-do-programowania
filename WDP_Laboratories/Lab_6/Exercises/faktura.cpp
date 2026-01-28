#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Faktura
{
    int nr_faktury;

    string imie;
    string nazwisko;
    string nazwa_firmy;

    int ilosc;
    float brutto;
    float netto;
    float vat;

    string data_wystawienia;
    string data_sprzedazy;

    void uzupelnij()
    {
        cout << "\n --- Tworzenie faktury --- \n";

        cout << "Podaj numer faktury: ";
        cin >> nr_faktury;

        cout << "Imie: ";
        cin >> imie;

        cout << "Nazwisko: ";
        cin >> nazwisko;

        cout << "Nazwa firmy: ";
        cin >> nazwa_firmy;

        cout << "\n --- Uzupelnianie produktu --- \n";

        cout << "Ilosc: ";
        cin >> ilosc;

        cout << "Netto: ";
        cin >> netto;

        cout << "Stawka VAT: ";
        cin >> vat;

        cout << "\n --- Data wystawienia faktury --- \n";

        cout << "Podaj przykladowa date wystawienia faktury: ";
        cin >> data_wystawienia;

        cout << "Podaj przykladowa date sprzedazy: ";
        cin >> data_sprzedazy;
    }


    void wyswietl()
    {
        float wartosc_netto = netto * ilosc;
        float stawka_vat = vat / 100.f;
        float kwota_vat = wartosc_netto * stawka_vat;
        float wartosc_brutto = wartosc_netto + kwota_vat;

        cout << "\n --- Faktura --- \n";
        cout << setw(6) << "Nr Faktury: " << nr_faktury << endl;
        cout << setw(6) << "Imie: " << imie << endl;
        cout << setw(6) << "Nazwisko: " << nazwisko << endl;
        cout << setw(6) << "Nazwa firmy: " << nazwa_firmy << endl;

        cout << "\n --- Produkt --- \n";

        cout << setw(6) << "Ilosc: " << ilosc << " Wartosc netto: " << wartosc_netto << " Wartosc brutto: " << wartosc_brutto;

        cout << "\n --- Data realizacji ---\n";

        cout << setw(6) << "Data wystawienia faktury: " << data_wystawienia << endl;
        cout << setw(6) << "Data sprzedazy: " << data_sprzedazy << endl;

        cout << "\n";
        cout << "\n";
    }

    void edytuj()
    {
        int wybor_opcji_1;
        int wybor_opcji_2;
        char koniec = 'N';

        while(true)
        {
            cout << "Ktory element faktury chcesz edytowac? \n";
            cout << "1. Dane\n";
            cout << "2. Produkt\n";
            cout << "3. Data realizacji\n";
            cin >> wybor_opcji_1;
            switch(wybor_opcji_1)
            {
                case 1:
                    cout << "Ktory element chcesz zmienic? \n";
                    cout << "1. Nr Faktury\n";
                    cout << "2. Imie i nazwisko\n";
                    cout << "3. Nazwa Firmy\n";
                    cout << "\n";
                    cin >> wybor_opcji_2;
                    switch(wybor_opcji_2)
                    {
                        case 1:
                            cout << "Nr Faktury: ";
                            cin >> nr_faktury;
                            break;
                        case 2:
                            cout << "Imie: ";
                            cin >> imie;
                            cout << "Nazwisko: ";
                            cin >> nazwisko;
                            break;
                        case 3:
                            cout << "Nazwa Firmy: ";
                            cin >> nazwa_firmy;
                            break;
                        default:
                            cout << "Wybrano nie poprawna operacje";
                            break;  
                    }
                    break;
                case 2: 
                    cout << "Ktory element chcesz zmienic?\n";
                    cout << "1. Ilosc\n";
                    cout << "2. Cena netto\n";
                    cout << "3. Stawka VAT\n";
                    cout << "\n";
                    cin >> wybor_opcji_2;
                    switch(wybor_opcji_2)
                    {
                        case 1:
                            cout << "Ilosc: ";
                            cin >> ilosc;
                            break;
                        case 2:
                            cout << "Cena netto: ";
                            cin >> netto;
                            break;
                        case 3:
                            cout << "Stawka VAT: ";
                            cin >> vat;
                            break;
                        default:
                            cout << "Wybrano nie poprawna operacje";
                            break;  
                    }
                    break;
                case 3:
                    cout << "Ktory element chcesz zmienic? \n";
                    cout << "1. Data wystawienia\n";
                    cout << "2. Data sprzedazy\n";
                    cout << "\n";
                    cin >> wybor_opcji_2;
                    switch(wybor_opcji_2)
                    {
                        case 1:
                            cout << "Data wystawienia: ";
                            cin >> data_wystawienia;
                            break;
                        case 2:
                            cout << "Data sprzedazy: ";
                            cin >> data_sprzedazy;
                            break;
                        default:
                            cout << "Wybrano nie poprawna operacje";
                            break;  
                    }
                    break;
                default:
                            cout << "Wybrano nie poprawna operacje";
                            break;  
            }

            cout << "Jesli zmieniles wszystko napisz T, jesli nie napisz N: ";
            cin >> koniec;

            if(koniec == 'T') break;
        }
    }
};



int main()
{


    Faktura osoba1;

    osoba1.uzupelnij();
    osoba1.wyswietl();
    osoba1.edytuj();
    osoba1.wyswietl();

    return 0;

}
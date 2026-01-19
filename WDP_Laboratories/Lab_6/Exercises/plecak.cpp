#include <iostream>

using namespace std;

struct Przedmiot
{
    const char* nazwa;
    int cena;
    float waga;

    void ustaw(const char* n, int c, float w)
    {
        nazwa = n;
        cena = c;
        waga = w;
    }

    void wyswietl() const
    {
        cout << nazwa << " | Cena: " << cena << " | Waga: " << waga << endl;
    }
};

struct Plecak
{

    const char* nazwa;
    int rozmiar;
    int ilosc;
    Przedmiot* przedmioty;

    void ustaw(const char* n, int r)
    {
        nazwa = n;
        rozmiar = r;
        ilosc = 0;
        przedmioty = new Przedmiot[rozmiar];
    }

    void wyczysc()
    {
        delete[] przedmioty;
        przedmioty = 0;
        ilosc = 0;
        rozmiar = 0;
        nazwa = 0;
    }

    void dodaj_przedmiot(const Przedmiot& p)
    {
        if (ilosc < rozmiar)
        {
            przedmioty[ilosc] = p;
            cout << "Dodano: " << p.nazwa << endl;
            ilosc++;
        }
        else
        {
            cout << "Brak miejsca w plecaku!" << endl;
        }
    }

    void usun_przedmiot(int indeks)
    {
        if (indeks >= 0 && indeks < ilosc)
        {
            cout << "Usunieto: " << przedmioty[indeks].nazwa << endl;

            for (int i = indeks; i < ilosc - 1; i++)
            {
                przedmioty[i] = przedmioty[i + 1];
            }
            ilosc--;
        }
        else
        {
            cout << "Nie ma takiego indeksu!" << endl;
        }
    }

    void wyswietl_zawartosc() const
    {
        cout << "\nPlecak: " << nazwa
             << " | Rozmiar: " << rozmiar
             << " | Ilosc: " << ilosc << endl;

        for (int i = 0; i < ilosc; i++)
        {
            cout << i << ". ";
            przedmioty[i].wyswietl();
        }
    }
};

int main()
{
    Przedmiot a, b, c;
    a.ustaw("Latarka", 45, 0.30f);
    b.ustaw("Chleb", 8, 0.20f);
    c.ustaw("Kompas", 60, 0.10f);

    Plecak p;
    p.ustaw("Plecak podroznika", 5);

    p.dodaj_przedmiot(a);
    p.dodaj_przedmiot(b);
    p.dodaj_przedmiot(c);

    p.wyswietl_zawartosc();

    p.usun_przedmiot(1);

    p.wyswietl_zawartosc();

    p.wyczysc();

    return 0;
}

#include <iostream>

using namespace std;

struct Osoba
{

    string imie;
    int wiek;

    void pobierz_dane()
    {
        cout << "Jak masz na imie?: ";
        cin >> imie;
        cout << "Ile masz lat?: ";
        cin >> wiek;
    }

    void wyswietl_dane()
    {
        cout << "Imie: " << imie << endl;
        cout << "Wiek: " << wiek << endl;
    }
    
};

int main ()
{

    Osoba osoba1;
    cout << "\n";
    osoba1.pobierz_dane();
    osoba1.wyswietl_dane();

    return 0;

}
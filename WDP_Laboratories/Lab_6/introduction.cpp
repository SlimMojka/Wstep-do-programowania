#include <iostream>

using namespace std;

struct Uczen // struktury i klasy to praktycznie to samo, w strukturze wszystko jest publiczne w klasie prywatne
{
    // Pola czyli zmienne w strukturze lub klasie 
    int nr_dziennika;
    string imie;
    string nazwisko;

    float ocena_j_polski[10];
    float ocena_j_angielski[10];

    void uzupelnij_dane(int _nr_dziennika, string _imie, string _nazwisko)
    {
        nr_dziennika = _nr_dziennika;
        imie = _imie;
        nazwisko = _nazwisko;
    }

    void rekrutacja()
    {
        cout << "Podaj nr dziennika: ";
        cin >> nr_dziennika;
        cout << "Podaj imie: ";
        cin >> imie;
        cout << "Podaj nazwisko: ";
        cin >> nazwisko;
    }

    void wyswietl_dane()
    {
        cout << nr_dziennika << ". " << imie << " " << nazwisko << endl; 
    }

    

};

int main()
{

    Uczen u1;
    
    u1.rekrutacja();

    u1.wyswietl_dane();




    /*
    1. Napisz strukturę Faktura, zawierającą kilka sensownych pól, metody pozwalające uzupełnic pola tej struktury, modyfikować ją oraz wyświetlać informacje o fakturze

    2. Napisz dowolną strukture, zawierającą kilka sesownych pól, metody pozwalające uzupełnic pola tej struktury, modyfikować ją oraz wyświetlać informacje o fakturze
    */


}
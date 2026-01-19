#include <iostream>
#include <iomanip>

using namespace std;

struct Faktura_Monitora
{
    
    string imie;
    string nazwisko;
    string kod_pocztowy;
    long telefon;
    string miejscowosc;
    string ulica;
    int numer_domu;


    string _operator;
    int numer_produktu;
    string nazwa_towaru;
    float ilosc;
    float vat;
    float cena_brutto;
    float wartosc_brutto;
    float netto;
    string forma_platnosci;
    string data_platnosci;
    float kwota;
 

    void dane(int np, string nt, int i, int v, float cb, string fp, string dp, string o)
    {
        numer_produktu = np;
        nazwa_towaru = nt;
        ilosc = i;
        vat = v;
        cena_brutto = cb;
        forma_platnosci = fp;
        data_platnosci = dp;
        _operator = o;
    }

    void wyswietl()
    {
        cout << "Nabywca: " << endl << imie << " " << nazwisko << endl << ulica << " " << numer_domu << endl << kod_pocztowy << " " << miejscowosc;
        cout << "\n";

        cout << setw(6) << "Lp. " << setw(30) <<"Nazwa Towaru " << setw(8) << "Ilosc " << setw(6) << "VAT " << setw(15) << " Cena brutto(PLN) " << setw(18) << "Wartosc brutto(PLN) " << endl;
        
        cout << setw(6) << numer_produktu << setw(30) <<  nazwa_towaru << setw(8) << ilosc << setw(6) << vat << setw(15) << cena_brutto << setw(18) << cena_brutto*ilosc << endl;

        cout << "\n";
        cout << "\n";

        cout << setw(15) << "Stawka" << setw(12) << "Netto(PLN)" << setw(8) << "VAT" << setw(12) << "Brutto(PLN)" << endl;
        float netto = (cena_brutto*ilosc)/1.23;
        cout << setw(15) << " " << setw(12) << netto << setw(8) << 


    }



    void uzupelnij()
    {
        cout << "Podaj imie: ";
        cin >> imie;
        cout << "Podaj nazwisko: ";
        cin >> nazwisko;
        cout << "Podaj kod pocztowy: ";
        cin >> kod_pocztowy;
        cout << "Podaj numer telefonu: ";
        cin >> telefon;
        cout << "Podaj miejscowosc: ";
        cin >> miejscowosc;
        cout << "Podaj ulice: ";
        cin >> ulica;
        cout << "Podaj numer mieszkania/domu: ";
        cin >> numer_domu;
    }



};

int main()
{

    Faktura_Monitora k1;
    // (int np, string nt, int i, int v, float cb, string fp, string dp, string o)
    k1.dane(1,"Monitor AOC AGON 27G4XE", 2, 23, 499, "Przelew", "11-12-2025", "Tpay");
    k1.uzupelnij();
    k1.wyswietl();

    // 1. Napisz strukturę Faktura, zawierającą kilka sensownych pól, metody pozwalające uzupełnic pola tej struktury, modyfikować ją oraz wyświetlać informacje o fakturze



}
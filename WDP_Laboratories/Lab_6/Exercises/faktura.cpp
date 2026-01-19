#include <iostream>
#include <string>
using namespace std;

struct firma {
    string NazwaFirmy;
    string AdresFirmy;
    int kodPocztowy;
    int NIP;

    void uzupelnij_dane(string nazwa, string Adres, int kodP, int NIP1)
    {
        NazwaFirmy = nazwa;
        AdresFirmy = Adres;
        kodPocztowy = kodP;
        NIP = NIP1;
    }

    void stworz()
    {
        cout << "Podaj nazwe firmy" << endl;
        getline(cin, NazwaFirmy);
        cout << "Podaj adres firmy" << endl;
        getline(cin, AdresFirmy);
        cout << "Podaj kod pocztowy firmy" << endl;
        cin >> kodPocztowy;
        cout << "Podaj NIP firmy" << endl;
        cin >> NIP;
    }

    void wyswietl()
    {
        cout << NazwaFirmy << " " << AdresFirmy << " " << kodPocztowy << " NIP:" << NIP << endl;
    }
};

struct Faktura {
    int numerFaktury;
    string dataSprzedazy;
    string dataWystawienia;
    firma sprzedawca;
    firma nabywca;
    string usluga;
    int kwota;

    void uzupelnij_dane(int numer, string dataS, string dataW, firma sprzedawca1, firma nabywca1, int kwota1)
    {
        numerFaktury = numer;
        dataSprzedazy = dataS;
        dataWystawienia = dataW;
        sprzedawca = sprzedawca1;
        nabywca = nabywca1;
        kwota = kwota1;

    }

    void wyswietl()
    {
        cout << "Numer faktury: "<< numerFaktury << endl;
        cout << "Data Sprzedazy : "<<dataSprzedazy << endl;
        cout << "Data Wystawienia: "<<dataWystawienia << endl;
        cout << "Sprzedawca: ";
        sprzedawca.wyswietl();
     
        cout << "Nabywca: ";
        nabywca.wyswietl();
        cout << "Kwota: "<<kwota << endl;
    }
};

int main()
{   
    Faktura faktura1;
    firma Sprzedawca1, odbiorca1;
    Sprzedawca1.stworz();
    odbiorca1.uzupelnij_dane("POL-BUD", "Warszawska 3", 00231, 1150048253);
  

    faktura1.uzupelnij_dane(1, "01-12-2026", "12-12-2026", Sprzedawca1, odbiorca1, 15000);
    cout << endl;
    faktura1.wyswietl();
    cout << endl;


    Sprzedawca1.wyswietl();
    odbiorca1.wyswietl();

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(NULL));

    int tab[5];

    tab[0] = 10;
    tab[1] = 15;
    tab[2] = 20;


    cout << tab[0] << endl;
    cout << tab[1] << endl;
    cout << tab[2] << endl;

    string imiona[3] = {"Michal", "Szymon", "Marcin"};

    for(int i=0; i<3; i++)
    {
        cout << imiona[i] << endl;
    }

    string miasto = "Nowy Sacz";
    cout << miasto[0] << endl;
    cout << miasto[6] << endl;

    int tablica[100];
    for(int i=0; i<100; i++)
    {
        tablica[i]=rand()%10;
    }

    cout << tablica[50] << endl;
    cout << tablica[59] << endl;

}
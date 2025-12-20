#include <iostream>

using namespace std;

int main()
{

    int liczby[10];

    int liczba;

    cout << "Podaj liczby: " << endl;

    for(int i=0; i<10; i++)
    {
        cin >> liczby[i];
    }

    cout << endl << "Podaj liczbe: ";

    cin >> liczba;

    for(int k=0; k<10; k++)
    {
        if(liczba==liczby[k])
        {
            cout << "Pozycja tej liczby to: " << k << endl;
            // nie przerywa petli na wszelki wypadek gdyby bylo wiecej takich liczb w tablicy
        }
        else
        {
            continue;
        }
    }

}
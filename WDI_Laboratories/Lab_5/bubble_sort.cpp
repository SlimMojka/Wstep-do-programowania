#include <iostream>
using namespace std;

void wyswietl(int tab[], int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
    {
        cout << tab[i] << " ";

    }
}
void sortowanie_babelkowe(int t[], int rozmiar)
{
    for(int j=0; j<rozmiar-1; j++)
    for(int i=0; i<rozmiar-1; i++)
    {
        if(t[i]>t[i+1])
        {
            swap(t[i], t[i+1]);
        }
    }
    wyswietl(t,rozmiar);
}
int main()
{
    int length;
    cout << "Wprowadz wielkosc tablicy: ";
    cin >> length;
    int tablica[length];
    cout << "Wprowadzaj wartosci do tablicy: ";

    for(int i=0; i<length; i++)
    {
        cin >> tablica[i];
    }
    cout << "\n";
    cout << "Posortowana tablica: " << endl;

    sortowanie_babelkowe(tablica, length);
}
#include <iostream>

using namespace std;

void rokPrzestepny(int x)
{
    if(x%2==0)
    {
        cout << "Rok przestepny";
    }
    else
    {
        cout << "Rok nieprzestępny";
    }
}


int main()
{
    int liczba_dni;

    cout << "Podaj liczbe dni ktora ma aktualny rok: ";
    cin >> liczba_dni;

    rokPrzestepny(liczba_dni);
}
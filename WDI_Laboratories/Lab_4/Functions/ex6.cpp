#include <iostream>

using namespace std;

void sprawdzHaslo(string haslo_1)
{
    string haslo_2;
    cout << "Wprowadz haslo ponownie: ";
    wprowadz_haslo:
    cin >> haslo_2;
    if(haslo_1==haslo_2)
    {
        cout << "Haslo poprawne";
    }
    else
    {
        cout << "Zle haslo, sproboj jeszcze raz: ";
        goto wprowadz_haslo;
    }
}

int main()
{
    string haslo;
    cout << "Ustaw haslo: ";
    cin >> haslo;

    sprawdzHaslo(haslo);
}
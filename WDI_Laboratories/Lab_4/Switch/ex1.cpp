#include <iostream>

using namespace std;

int main()
{
    int dzien;

    cout << "Wprowadz dzien tygodnia (1-7): ";
    cin >> dzien;

    switch(dzien)
    {
        case 1:
            cout << "Poniedziałek";
            break;
        case 2:
            cout << "Wtorek";
            break;
        case 3:
            cout << "Sroda";
            break;
        case 4:
            cout << "Czwartek";
            break;
        case 5:
            cout << "Piatek";
            break;
        case 6:
            cout << "Sobota";
            break;
        case 7:
            cout << "Niedziela";
            break;
        default:
            cout << "Wprowadzono zla liczbe lub znak";
            break;
    }
}
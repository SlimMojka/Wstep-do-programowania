#include <iostream>

using namespace std;

int main()
{
    float a, b;
    char operacja;
    cout << "Wprowadz operacje ktora chcesz wykonac na liczbach: ";
    cin >> operacja;
    cout << "Wprowadź liczby: ";
    cin >> a >> b;
    cout << "\n";

    switch(operacja)
    {
        case '+':
            cout << "Wynik dodawania liczb a+b wynosi: " << a+b;
            break;
        case '-':
            cout << "Wynik odejmowania liczb a-b wynosi: " << a-b;
            break;
        case '*':
            cout << "Wynik mnozenia liczb a*b wynosi: " << a*b;
            break;
        case '/':
            cout << "Wynik dzielenia liczb a/b wynosi: " << a/b;
            break;
        default:
            cout << "Wprowadzono niepoprawny znak operacji";
            break;
    }
}
#include <iostream>

using namespace std;

float dodawanie(float a, float b)
{
    return a+b;
}

float odejmowanie(float a, float b)
{
    return a-b;
}

float mnozenie(float a, float b)
{
    return a*b;
}

float dzielenie(float a, float b)
{
    return a/b;
}

int main()
{
    char operacja;
    float a, b;
    cout << "Podaj znak operaji ktora chcesz wykonac,(+,-,*,/): ";
    cin >> operacja;

    switch(operacja)
    {
        case '+':
            cout << "Podaj liczby ktore chcesz dodac: ";
            cin >> a >> b;
            cout << "Wynik dodawania wynosi: " << dodawanie(a,b);
            break;
        case '-':
            cout << "Podaj liczby ktore chcesz odjac: ";
            cin >> a >> b;
            cout << "Wynik odejmowania wynosi: " << odejmowanie(a,b);
            break;
        case '*':
            cout << "Podaj liczby ktore chcesz pomnozyc: ";
            cin >> a >> b;
            cout << "Iloczyn a i b wynosi: " << mnozenie(a,b);
            break;
        case '/':
            cout << "Podaj liczby ktore chcesz podzielic: ";
            cin >> a >> b;
            cout << "Iloraz a i b wynosi: " << dzielenie(a,b);
            break;
        default:
            cout << "Wprowadzono niepoprawny znak operacji!";
            break;

    }
}
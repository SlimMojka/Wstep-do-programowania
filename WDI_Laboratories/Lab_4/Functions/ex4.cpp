#include <iostream>

using namespace std;

long long silnia(int n)
{
    long long s = 1;
    for(int i=1; i<n; i++)
    {
        s=s*(i+1);
    }
    return s;
}

int main()
{
    int liczba;

    cout << "Podaj liczbe do obliczenia silni: ";
    cin >> liczba;

    cout << "Slinia z liczby " << liczba << " wynosi: " << silnia(liczba);
}
#include <iostream>

using namespace std;

int silnia(int n)
{
    int silnia = 1;

    for(int i=silnia; i<n; i++)
        silnia*=i+1;
    return silnia;
}

int main()
{
    int liczba;

    cout << "Podaj liczbe z ktorej chcesz obliczyc silnie: "; 
    cin  >> liczba;

    cout << "Silinia z liczby " << liczba << " wynosi: " << silnia(liczba);
}
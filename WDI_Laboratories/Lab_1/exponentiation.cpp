#include <iostream>

using namespace std;

int main()
{
    
    int x = 2; 
    long long wynik_potegi = 1; 
    int potega;

    cout << "Podaj liczbe potegi:";
    cin >> potega;

    
    for(int i = 0; i < potega; i++) 
    {
        wynik_potegi = wynik_potegi * x;
    }

    
    cout << "Wynik x do potegi " << potega << " wynosi: " << wynik_potegi << endl;

    return 0;
}
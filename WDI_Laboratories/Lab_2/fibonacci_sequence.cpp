#include <iostream>

using namespace std;


long long fibonacciWhile(int n) 
{
    if (n <= 0) 
    {
        return 0; 
    }
    
    if (n == 1 || n == 2) {
        return 1;
    }

    long long a = 1; 
    long long b = 1; 
    long long wynik = 0; 

    int i = 3; 

    while (i <= n) 
    {
        wynik = a + b;
        
        a = b; 
        b = wynik;

        i++;
    }
    return wynik;
}

int main() 
{
    int n;
    cout << "Podaj numer wyrazu ciagu Fibonacciego (n > 0): ";
    
    if (!(cin >> n) || n <= 0) 
    {
        cerr << "Nieprawidlowe dane wejsciowe. Podaj liczbe naturalna n > 0." << endl;
        return 1;
    }

    long long fn = fibonacciWhile(n);
    cout << "F(" << n << ") = " << fn << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    
    int n;
    long long silnia = 1;

    cout << "Podaj liczbe: ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        silnia = silnia*i;

    }
    cout << "Silnia z liczby " << n << " wynosi: " << silnia << endl;
}
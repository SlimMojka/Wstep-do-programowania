#include <iostream>

using namespace std;

void trojkat(int a)
{
    if(a <= 0) return;
    {
        for (int i = 0; i < a; ++i)
        {
            int odstep = a - i - 1;
            int gwiazdki  = 2 * i + 1; 
            for(int s = 0; s < odstep; ++s)
            {
                cout << ' ';
            }
            for(int s = 0; s < gwiazdki;  ++s) 
            {
                cout << '*';
            }
            cout << '\n';
        }
    }
}

int main()
{

    int h;

    cout << "Podaj wysokosc trojkata: ";
    cin >> h;

    trojkat(h);
}
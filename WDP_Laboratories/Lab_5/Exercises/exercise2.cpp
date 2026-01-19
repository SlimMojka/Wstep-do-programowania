#include <iostream>

using namespace std;

void rysujTrojkat(int wysokosc)
{
    for(int i=0; i<wysokosc; i++)
    {
        for(int j=0; j<wysokosc-i-1; j++)
        {
            cout << " ";
        }

        for(int k=0; k<2*i+1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int h;

    cout << "Podaj wysokosc trojkata: ";

    cin >> h;

    cout << "\n";

    rysujTrojkat(h);
}
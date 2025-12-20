#include <iostream>

using namespace std;

int main()
{


    string imiona[10];

    cout << "Podaj imiona: " << endl;

    for(int i=0; i<10; i++)
    {
        cin >> imiona[i];
    }

    cout << endl;
    cout << "Odwrocone imiona: ";
    cout << endl;

    for(int k=9; k>=0; k--)
    {
        cout << imiona[k] << endl;
    }
}
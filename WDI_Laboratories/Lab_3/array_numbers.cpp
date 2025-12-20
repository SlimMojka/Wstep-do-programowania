#include <iostream>

using namespace std;

int main()
{

    int liczby[10];

    cout << "Podaj liczby: " << endl;

    for(int i=0; i<10; i++)
    {
        cin >> liczby[i];
    }
    
    for(int k=0; k<10; k++)
    {
        cout << "tab["<< k <<"] = " << liczby[k] << endl;
    }
}
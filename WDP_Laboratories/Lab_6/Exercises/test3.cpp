#include <iostream>

using namespace std;

int main()
{

    int gotowka;

    cout << "Podaj ilosc gotowki ktora chcesz wyplacic: ";
    while(true)
    {
        cin >> gotowka;
        if(gotowka==0) break;

        if(gotowka%10==0 || gotowka%20==0 || gotowka%50==0)
        {
            cout << "Odbierz gotowke";
            break;
        }
        else 
        {
            cout << "Nie mozesz wyplacic takiej kwoty, sproboj ponownie: ";
        }

    }

    return 0;

}
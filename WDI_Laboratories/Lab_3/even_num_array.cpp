#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int tab[20];

    for(int i=0; i<20; i++)
    {
        tab[i] = rand()%100+1;
        cout << tab[i] << " ";
    }
    cout << endl;

    for(int i=0; i<20; i++)
    {
        if(tab[i]%2==0)
        {
            cout << tab[i] << " ";
        }
    }
}
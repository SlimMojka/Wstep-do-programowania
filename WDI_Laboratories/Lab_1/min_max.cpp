#include <iostream>

using namespace std;

int main()
{

    int liczby[6];

    cout << "Wprowadz liczby: " << endl;

    for(int i=0; i<6; i++)
    {
        cin >> liczby[i];
    }

    int min, max;

    min = liczby[0];
    max = liczby[0];

    for(int i=1; i<6; i++)
    {
        if(min<=liczby[i])
        {
            min = min;
        }
        else if(min>liczby[i])
        {
            min = liczby[i];
        }
    }

    for(int k=1; k<6; k++)
    {
        if(max>=liczby[k])
        {
            max = max;
        }
        else if(max<liczby[k])
        {
            max = liczby[k];
        }
    }

    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
}
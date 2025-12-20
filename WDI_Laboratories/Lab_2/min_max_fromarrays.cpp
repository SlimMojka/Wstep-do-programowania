#include <iostream>

using namespace std;

int main()
{
    int length;

    cout << "Podaj ilosc liczb ktora chcesz wprowadzic: ";
    cin >> length;

    float liczby[length], min, max;

    cout << "Wprowadzaj liczby: " << endl;

    for(int i=0; i<length; i++)
    {
        cin >> liczby[i];
    }

    min=liczby[0];
    max=liczby[0];
    for(int i=1; i<length; i++)
    {
        if(liczby[i]<min)
        {
            min = liczby[i];
        }
        else if(liczby[i]>max)
        {
            max = liczby[i];
        }
    }

    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;

    return 0;
}
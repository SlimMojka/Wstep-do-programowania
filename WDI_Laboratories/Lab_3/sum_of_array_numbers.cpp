#include <iostream>

using namespace std;

int main()
{

    float liczby[10];
    float suma = 0;

    cout << "Wprowadz liczby: " << endl;

    for(int i=0; i<10; i++)
    {
        cin >> liczby[i];
    }

    cout << endl << "Suma liczb rzeczywistych z tablicy: " << endl;

    for(int k=0; k<10; k++)
    {
        suma = suma + liczby[k];
    }

    cout << "Suma wszystkich elementow wynosi: " << suma;


}
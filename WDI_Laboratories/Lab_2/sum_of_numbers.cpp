#include <iostream>

using namespace std;

int main()
{
    
    float suma = 0.0f;
    float liczba;
    int count = 0; 

    cout << "Wprowadzaj liczby: " << endl;

 
    do
    {
        cout << "Podaj liczbe: ";
        cin >> liczba;

       
        if (liczba > 0)
        {
            suma += liczba; 
            count++;        
        }

    } while (liczba != 0); 

    cout << endl << "WYNIKI: " << endl;

    if (count > 0)
    {
        float srednia = suma / count;

        cout << "a) Suma wprowadzonych liczb wynosi: " << suma << endl;
        cout << "b) Liczba wprowadzonych elementow (bez 0): " << count << endl;
        cout << "c) Srednia wprowadzonych liczb wynosi: " << srednia << endl;
    }
    else
    {
        cout << "Nie wprowadzono zadnych liczb dodatnich.\n";
    }

    return 0;
}
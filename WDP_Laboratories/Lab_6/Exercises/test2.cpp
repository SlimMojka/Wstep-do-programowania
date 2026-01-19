#include <iostream>

using namespace std;

int main()
{

    float oceny;
    float count = 0;
    float suma_ocen = 0;
    float srednia;

    cout << "Wprowadzaj oceny: ";

    while(true)
    {
        cin >> oceny;
        if(oceny==0) break;
        count++;
        suma_ocen = suma_ocen + oceny;
    }

    srednia = suma_ocen/count;

    if(srednia >= 0 && srednia <= 1.75)
    {
        cout << "Ocena końcowa: 1" << endl;
    }
    else if(srednia > 1.75 && srednia <= 2.75)
    {
        cout << "Ocena końcowa: 2" << endl;
    }
    else if(srednia > 2.75 && srednia <= 3.75)
    {
        cout << "Ocena końcowa: 3" << endl;
    }
    else if(srednia > 3.75 && srednia <= 4.75)
    {
        cout << "Ocena końcowa: 4" << endl;
    }
    else if(srednia > 4.75 && srednia <= 5.75)
    {
        cout << "Ocena końcowa: 5" << endl;
    }
    else if(srednia > 5.75 && srednia <= 6)
    {
        cout << "Ocena końcowa: 6" << endl;
    }

    return 0;

}
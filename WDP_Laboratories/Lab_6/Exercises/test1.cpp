#include <iostream>

using namespace std;

int main()
{

    int liczby = 0;


    int count = 0;
    int count_podzielne_przez_trzy = 0;
    int count_podzielne_przez_piec = 0;
    int count_podzielne_przez_oba = 0;

    cout << "Wprowadzaj liczby calkowite: ";
    
    while(true)
    {
        cin >> liczby;
        if (liczby == 0) break;
        count++;

        if(liczby%3==0 && liczby%5==0)
        {
            count_podzielne_przez_oba++;
        }
        if(liczby%3==0)
        {
            count_podzielne_przez_trzy++;
        }
        if(liczby%5==0)
        {
            count_podzielne_przez_piec++;
        }

    }

    cout << "Sposrod " << count << " podanych liczb" << endl;
    cout << count_podzielne_przez_trzy << ": liczba/liczby sa podzielne przez 3" << endl;
    cout << count_podzielne_przez_piec << ": liczba/liczby sa podzielne przez 5" << endl;
    cout << count_podzielne_przez_oba << ": liczba/liczby sa podzielne przez zarowno 3 i 5" << endl;
 

    return 0;

}
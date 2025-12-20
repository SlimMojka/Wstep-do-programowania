#include <iostream>

using namespace std;

int main()
{

    int x;

    int temp; // tymczasowa zmienna do sprawdzania czy x jest podzielne przez 5

    cout << "Podaj x: ";
    cin >> x;

    temp = x;

    while(x>0)
    {
        x=x-2;
    }
    while(temp>0)
    {
        temp=temp-5;
    }

    if(x==0 && temp==0)
    {
        cout << "Liczba jest parzysta oraz podzielna przez 5";
    }
    else if(x==0 && temp!=0)
    {
        cout << "Liczba jest parzysta ale nie jest podzielna przez 5";
    }
    else if(x!=0 && temp==0)
    {
        cout << "Liczba nie jest parzysta ale jest podzielna przez 5";
    }
    else 
    {
        cout << "Liczba nie jest parzysta oraz nie jest podzielna przez 5";
    }

    return 0;

}
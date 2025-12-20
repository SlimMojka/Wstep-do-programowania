#include <iostream>

using namespace std;

int main()
{

    int x=0, y=0, a=3, b=4, temp=0;

    x = a;
    y = b;

    cout << x << "\n";
    cout << y << "\n";

    // swap(x, y); - latwiejsza zamiana zmiennych
    temp = x;
    x = y;
    y = temp;
 
    cout << "Po zmianie: \n";
    cout << x << "\n";
    cout << y << "\n"; 



}
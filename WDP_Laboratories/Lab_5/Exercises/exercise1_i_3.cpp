#include <iostream>

using namespace std;

int poleProstokata(int a, int b)
{
    return a*b;
}

int main()
{
    int x, y;

    cout << "Podaj 2 boki prostokata: " << endl;
    cin >> x >> y;

    cout << "Pole prostokata wynosi: " << poleProstokata(x,y) << endl;

    return 0;
}
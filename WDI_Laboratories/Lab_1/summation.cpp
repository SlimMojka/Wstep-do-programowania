#include <iostream>

using namespace std;

int main()
{
    float a=2, b=4, c=3;

    float suma;

    suma = a + b*(c*c);
    cout << suma << endl;

    suma = (a+b)*(a+b) - (b/c) * (a-2);
    cout << suma << endl;

    suma = ((a*b)-(c-a)) / ((b*b)-(4*a*c));
    cout << suma << endl;

    return 0;
}
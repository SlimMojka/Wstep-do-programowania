#include <iostream>

using namespace std;

int main()
{

    int a=5, b=10, c=15, x=0, y=0, z=0;
    int przyklad;

    cout << "Wybierz przyklad (1-3): ";
    cin >> przyklad;

    switch(przyklad)
    {
        case 1:
            x = a;
            y = b;
            z = x+y;
            x = x*x;
            x = 1/x;
            y = y*y;
            y = 1/y;
            x = x-y;
            x = x/z;
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
            cout << "z = " << z << endl;
            break;
        case 2:
            x = a*a;
            y = b;
            x = x-y;
            z = y*b;
            z = z+a;
            z = c/z;
            y = x*z;
            y = y/z;
            x = z+y;
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
            cout << "z = " << z << endl;
            break;
        case 3:
            x = a;
            y = x+b;
            z = x*y;
            x = c;
            x = x*x;
            y = y*y;
            y = z/y;
            z = a*a;
            z = z+x;
            z = a*b;
            x = x/z;
            x = y-x;
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
            cout << "z = " << z << endl;
            break;
        default:
            cout << "Podano zly numer";
            break;

    }

    return 0;

}
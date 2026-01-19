#include <iostream>
#include <cmath>

using namespace std;

float poleKwadratu(int a)
{
    return a*a;
}

float obwodKwadratu(int a)
{
    return a*4;
}

float poleProstokata(int a, int b)
{
    return a*b;
}

float obwodProstokata(int a, int b)
{
    return (a*2)+(b*2);
}

float poleTrojkata(int a, int b, int c)
{
    float s = (a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

float obwodTrojkata(int a, int b, int c)
{
    return a+b+c;
}


int main()
{
    int operacja;

    cout << "Co chcesz obliczyc? " << endl;
    cout << "||-----------------------------||" << endl;
    cout << "1 - Pole & Obwod Kwadratu" << endl;
    cout << "2 - Pole & Obwod Prostokata" << endl;
    cout << "3 - Pole & Obwod Trojkata" << endl;
    cout << "||-----------------------------||" << endl;

    cin >> operacja;

    int x, y, z; 

    cout << "\n";

    switch(operacja)
    {
        case 1: 
            cout << "Podaj bok kwadratu: ";
            cin >> x;
            cout << "Pole kwadratu wynosi: " << poleKwadratu(x) << endl;
            cout << "Obowd kwadratu wynosi: " << obwodKwadratu(x) << endl;
            break;
        case 2:
            cout << "Podaj boki prostokata: ";
            cin >> x >> y;
            cout << "Pole prostokata wynosi: " << poleProstokata(x,y) << endl;
            cout << "Obwod prostokata wynosi: " << obwodProstokata(x,y) << endl;
            break;
        case 3:
            do
            {
                cout << "Podaj boki trojkata: ";
                cin >> x >> y >> z;

                if (!(x + y > z && x + z > y && y + z > x))
                {
                    cout << "Taki trojkat nie istnieje! Sprobuj ponownie.\n";
                }

            }while (!(x + y > z && x + z > y && y + z > x));

            cout << "Pole trojkata wynosi: " << poleTrojkata(x, y, z) << endl;
            cout << "Obwod trojkata wynosi: " << obwodTrojkata(x, y, z) << endl;
            break;

        default:
            cout << "Podano zla operacje";
            break;
    }

    return 0;
}
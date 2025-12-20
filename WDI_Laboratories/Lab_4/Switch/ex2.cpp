#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int operacja;
    float a, b, c, s; // s do wzoru herona na pole trojkata
    float pole = 0, obwod = 0;

    cout << "Wprowadz co chcesz obliczyc" << endl;
    cout << "1 - Prostokat" << endl;
    cout << "2 - Kwadrat" << endl;
    cout << "3 - Trojkat" << endl; 

    cin >> operacja;

    switch(operacja)
    {
        case 1:
            cout << "Wprowadz bok a i b: ";
            cin >> a >> b;
            pole = a*b;
            obwod = (2*a)+(2*b);
            cout << "Pole wynosi prostokata wynosi: " << pole << endl;
            cout << "Obwod prostokata wynosi: " << obwod << endl;
            break;
        case 2:
            cout << "Wprowadz bok a: ";
            cin >> a;
            pole = a*a;
            obwod = 4*a;
            cout << "Pole kwadratu wynosi: " << pole << endl;
            cout << "Obwod kwadratu wynosi: " << obwod << endl;
            break;
        case 3:
            cout << "Wprowadz boki a, b i c trojkata: ";
            cin >> a >> b >> c;

            if(a + b > c && a + c > b && b + c > a)
            {
                s = (a+b+c)/2.0;
                pole = sqrt(s*(s-a)*(s-b)*(s-c));
                obwod = a+b+c;
                cout << "Pole trojkata wynosi: " << pole << endl;
                cout << "Obwod trojkata wynosi: " << obwod << endl;
                break;
            }
            else 
            {
                cout << "Wprowadzono zle boki trojkata";
                break;
            }
        default:
            cout << "Wprowadzono zla liczbe";
            break;
    }
}
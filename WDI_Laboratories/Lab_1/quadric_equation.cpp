#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;
    float delta;
    float x1, x2;

    cout << "Podaj wspolczynnik a: ";
    cin >> a;
    cout << "Podaj wspolczynnik b: ";
    cin >> b;
    cout << "Podaj wspolczynnik c: ";
    cin >> c;

    if (a == 0)
    {
        cout << "To nie jest rownanie kwadratowe (a nie moze byc zerem)." << endl;
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        cout << "Delta jest ujemna (Delta = " << delta << "). Brak rozwiazan rzeczywistych." << endl;
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        cout << "Delta jest rowna zero (Delta = 0). Dokladnie jedno rozwiazanie (x1 = x2): " << x1 << endl;
    }
    else
    {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "Delta jest dodatnia (Delta = " << delta << "). Dwa rozwiazania rzeczywiste: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, x;

    cout << "Podaj liczby a, b (przedzial 1):" << endl;
    cin >> a >> b;

    cout << "Podaj liczby c, d (przedzial 2):" << endl;
    cin >> c >> d;

    cout << "Podaj liczbe x (do sprawdzenia):" << endl;
    cin >> x;

    float temp;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (c > d) {
        temp = c;
        c = d;
        d = temp;
    }


    bool czy_w_ab = (x >= a) && (x <= b);
    cout << "1. Czy x nalezy do przedzialu [a, b]: " << (czy_w_ab ? "TAK" : "NIE") << endl;


    bool czy_w_cd = (x >= c) && (x <= d);
    bool czy_w_sumie = czy_w_ab || czy_w_cd;
    cout << "2. Czy x nalezy do sumy przedzialow [a, b] U [c, d]: " << (czy_w_sumie ? "TAK" : "NIE") << endl;

    bool czy_w_przecieciu = czy_w_ab && czy_w_cd;
    cout << "3. Czy x nalezy do przeciecia przedzialow [a, b] n [c, d]: " << (czy_w_przecieciu ? "TAK" : "NIE") << endl;

    return 0;
}
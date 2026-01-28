#include <iostream>

using namespace std;

struct Punkt
{

    double x;
    double y;

    void uzupelnij_dane()
    {
        cout << "Podaj dane punktu x: ";
        cin >> x;
        cout << "Podaj dane punktu y: ";
        cin >> y;
    }

    void odleglosc()
    {
        if(x>y)
        {
            cout << "Odleglosc miedzy punktami wynosi: " << x-y << endl;
        }
        else if(x<y)
        {
            cout << "Odleglosc miedzy punktami wynosi: " << y-x << endl;
        }
        else 
        {
            cout << "Punkt znajduje sie w tym samym miejscu!" << endl;
        }
    }

};


int main()
{

    Punkt punkt1;
    cout << "\n";
    punkt1.uzupelnij_dane();
    punkt1.odleglosc();

    return 0;


}
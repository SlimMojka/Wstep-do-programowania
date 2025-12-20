#include <iostream>

using namespace std;

void trojkaPitagorejska(int a, int b, int c)
{
    if(a<b && b<c)
    {
        if((a*a)+(b*b)==(c*c))
        {
            cout << "Trojka pitagorejska";
        }
        else 
        {
            cout << "To nie jest trojka pitagorejska";
        }
    }
    else if(a<b && c<b)
    {
        if((a*a)+(c*c)==(b*b))
        {
            cout << "Trojka pitagorejska";
        }
        else
        {
            cout << "To nie jest trojka pitagorejska";
        }
    }
    else if(b<a && c<a)
    {
        if((b*b)+(c*c)==(a*a))
        {
            cout << "Trojka pitagorejska";
        }
        else 
        {
            cout << "To nie jest trojka pitagorejska";
        }
    }
    else
    {
        cout << "To nie jest trojka pitagorejska";
    }

}

int main()
{

    int x, y, z;
    cout << "Wprowadz 3 boki trojkata: ";
    cin >> x >> y >> z;

    trojkaPitagorejska(x, y, z);
}
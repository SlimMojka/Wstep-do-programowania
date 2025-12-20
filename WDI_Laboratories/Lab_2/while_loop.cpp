#include <iostream>

using namespace std;

int main()
{
    int count = 0;



    int x = 15; int y = 10; 
    int gcd = 0;

    while (x < y || x > y) 
    { 
        count++;
        if (x > y)  
        {
            x = x-y; 
        }
        else   
        {
            y = y - x; 
            gcd = x;
        }
        cout << count << ". "  << "x=" << x << " & y= " << y << " & gcd = " << gcd << endl;
    }

    cout << "\n";
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "gcd = " << gcd << endl;
    cout << "Petla zostala powtorzona: " << count << " razy";
}
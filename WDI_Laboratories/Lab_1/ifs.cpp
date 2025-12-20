#include <iostream>

using namespace std;

int main() {
    // a) a=1, b=1
    {
        int a = 1;
        int b = 1;
        int x = a;
        int y = b;

        if (x > y) {
            x = x + y;
            y = x * x; 
        }

        x = x + y;
        cout << x << endl; 
    }

    // b) a=5, b=2
    {
        int a = 5;
        int b = 2;
        int x = a;
        int y = b;

        if (x > y) {
            // x = 5 + 2 = 7
            x = x + y;
            // y = 7 * 7 = 49
            y = x * x; 
        }

        // x = 7 + 49 = 56
        x = x + y;
        cout << x << endl; 
    }

    // c) a=23, b=12
    {
        int a = 23;
        int b = 12;
        int x = a;
        int y = b;

        if (x > y) {
            // x = 23 + 12 = 35
            x = x + y;
            // y = 35 * 35 = 1225
            y = x * x; 
        }

        // x = 35 + 1225 = 1260
        x = x + y;
        cout << x << endl; 
    }

    return 0;
}
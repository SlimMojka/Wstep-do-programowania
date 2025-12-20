#include <iostream>

using namespace std;

int main() {
    
    // a) a=1, b=1
    {
        int a = 1;
        int b = 1;
        int x = a; // x = 1
        int y = b; // y = 1

        // if (x > y) -> if (1 > 1) -> FALSZ
        if (x > y) { 
            if (x < 2 * y) {
                x = 2 * x - y;
                if (x > 2 * y) {
                    x = x * x;
                }
            } else {
                x = x + y;
            }
        }
        
        // Finalny x = 1
        cout << x << endl; 
    }
    
    // b) a=5, b=2
    {
        int a = 5;
        int b = 2;
        int x = a; // x = 5
        int y = b; // y = 2

        // if (x > y) -> if (5 > 2) -> PRAWDA
        if (x > y) {
            // if (x < 2 * y) -> if (5 < 4) -> FALSZ
            if (x < 2 * y) { 
                x = 2 * x - y;
                if (x > 2 * y) {
                    x = x * x;
                }
            } 
            // Blok else jest wykonywany
            else { 
                // x = 5 + 2 = 7
                x = x + y;
            }
        }
        
        // Finalny x = 7
        cout << x << endl; 
    }
    
    // c) a=23, b=12
    {
        int a = 23;
        int b = 12;
        int x = a; // x = 23
        int y = b; // y = 12

        // if (x > y) -> if (23 > 12) -> PRAWDA
        if (x > y) {
            // if (x < 2 * y) -> if (23 < 24) -> PRAWDA
            if (x < 2 * y) { 
                // x = 2 * 23 - 12 = 46 - 12 = 34
                x = 2 * x - y;
                
                // if (x > 2 * y) -> if (34 > 24) -> PRAWDA
                if (x > 2 * y) {
                    // x = 34 * 34 = 1156
                    x = x * x;
                }
            } else {
                x = x + y;
            }
        }
        
        // Finalny x = 1156
        cout << x << endl; 
    }

    return 0;
}
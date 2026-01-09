#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int sumrec(int n)
{
    cout << "Begin of teh sumrec function for n = " << n << endl;
    int loc = rand()%100;
    cout << "  I keep my local variable loc = " << loc << endl;
    if(n==1)
    {
        cout << endl << "End of sumrec(1)" << endl;
        cout << " MY local variable loc = " << loc << " will be released" << endl;
        cout << " i'm going to return 1" << endl;
        return 1;
    }
    else 
    {
        cout << "I'm going to execute: " << n << " + sumrec("<< n-1 <<")" << endl;
        cout << " sumrec("<< n-1 << ") will be called now" << endl;
        int tmp;
        tmp = sumrec(n-1);
        
    }
}
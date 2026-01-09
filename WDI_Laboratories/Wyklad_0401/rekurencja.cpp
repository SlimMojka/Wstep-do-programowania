#include <iostream>

using namespace std;

int sumrec(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n + sumrec(n-1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;
    int sum = sumrec(n);
    cout << "==== Sum = " << sum << endl;
}
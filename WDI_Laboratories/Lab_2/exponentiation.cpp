#include <iostream>

using namespace std;

int main()
{

    float x = 0.0, suma = 0.0, iloczyn = 0.0, temp = 0.0;
    int n=0;
    
    cout << "Podaj x: ";
    cin >> x;
    cout << "Podaj n: ";
    cin >> n; 

    if(n==0)
    {
        cout << "Liczba " << x << " do potegi 0 wynosi: 1";
    }
    else if(n==1)
    {
        cout << "Liczba " << x << " do potegi 1 wynosi: " << x;
    }
    else if(n>1)
    {
        temp = x; 
        for(int i=0; i<n-1; i++)
        {
            if(i>0)
            {
                iloczyn = iloczyn*x;
                continue;
            }
            iloczyn = x*x;
        }
        cout << "Liczba " << temp << " do potegi " << n << " wynosi: " << iloczyn;
    }   
    else if(n<0)
    {
        
        temp = x;
        n = n*(-1);
        for(int i=0; i<n-1; i++)
        {
            if(i>0)
            {
                iloczyn = iloczyn*x;
                continue;
            }
            iloczyn = x*x;
        }
        cout << "Liczba " << temp << " do potegi " << n << " wynosi: " << (1/iloczyn);
    }
    return 0;

}
#include <iostream>

using namespace std;

int main()
{
    unsigned int m = 0;
    unsigned int n = 0;
    unsigned int suma = 0;

    cout << "Podaj m: ";
    cin >> m;
    cout << "Podaj n: ";
    cin >> n;

    unsigned int temp1 = m;
    unsigned int temp2 = n;

    for(int i=m; i<=n; i++)
    {
        suma=suma+i;
    }
    cout << suma << endl;

    suma = 0;

    while(m<=n)
    {
        suma=suma+m;
        m++;
    }
    cout << suma << endl;

    suma = 0;

    do
    {
        suma=suma+temp1;
        temp1++;
    }while(temp1<=temp2);
    cout << suma << endl;

    return 0;
}
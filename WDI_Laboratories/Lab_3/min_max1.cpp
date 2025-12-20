#include <iostream>

using namespace std;

int main()
{
    float liczby[10];
    float max;
    float min;
    
    for(int i=0 ;i<10; i++)
    {
        cout<<"Podaj "<<i+1<<". liczbe rzeczywista"<<endl;
        cin>>liczby[i];
    }
    
    max = liczby[0];
    min = liczby[0];
    
    for(int i=1 ;i<10; i++)
    {
        if(liczby[i]>max)
        {
            max=liczby[i];
        }
        if(liczby[i]<min)
        {
            min=liczby[i];
        }
    }
    cout<<"Najwieksza liczba w tablicy: "<<max<<endl;
    cout<<"Najmniejsza liczba w tablicy: "<<min<<endl;
      return 0;   
}
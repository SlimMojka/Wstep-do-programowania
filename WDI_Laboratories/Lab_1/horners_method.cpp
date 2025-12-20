#include <iostream>

using namespace std;

int main()
{
    float a = 3.0, b =-2.0, c=5.0, d=1.0, x=4.0;
    long long Wzor_definicyjny, Wzor_hornera;
    float temp1, temp2, temp3, temp4;

    temp1 = x * x;
    temp2 = temp1 * x;
    temp3 = a * temp2;
    

    temp4 = x * x;
    temp1 = b * temp4;
    
   
    temp4 = c * x; 
    
  
    temp2 = temp3 + temp1; 
    temp3 = temp4 + d;    
    Wzor_definicyjny = temp2 + temp3; 


    temp1 = a * x; 
    temp2 = b + temp1;
    
 
    temp3 = x * temp2;

    temp4 = c + temp3; 

    temp1 = x * temp4; 

    Wzor_hornera = d + temp1; 

    cout << "Wzor definicyjny = " <<  Wzor_definicyjny << endl;
    cout << "Wzor Hornera = " << Wzor_hornera << endl;

    return 0;
}
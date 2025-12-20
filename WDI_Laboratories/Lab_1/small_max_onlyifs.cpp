#include <iostream>

using namespace std;

int main()
{

    float liczba_a, liczba_b, liczba_c, liczba_d;
    
    cout << "Podaj cztery liczby (a, b, c, d):" << endl;
    cin >> liczba_a >> liczba_b >> liczba_c >> liczba_d;
    
    float max_wartosc;
    
    max_wartosc = liczba_a;
    
    if(liczba_b > max_wartosc) 
    {
        max_wartosc = liczba_b;
    }
    
    if(liczba_c > max_wartosc) 
    {
        max_wartosc = liczba_c;
    }
    
    if(liczba_d > max_wartosc) 
    {
        max_wartosc = liczba_d;
    }
    
    cout << "\n1. Najwieksza liczba (dla roznych) to: " << max_wartosc << endl;
    

    cout << "2. Najwieksza liczba (dla rownych) to: " << max_wartosc << endl;
    

    cout << "3. i 4. Sortowanie malejace (a, b, c, d):" << endl;
    
    float pierwsza, druga, trzecia, czwarta;


    float w1, w2, w3, w4;
    w1 = liczba_a; w2 = liczba_b; w3 = liczba_c; w4 = liczba_d;

    if(w1 >= w2 && w1 >= w3 && w1 >= w4) 
    {
        pierwsza = w1;

        if(w2 >= w3 && w2 >= w4) 
        {
            druga = w2;
            if(w3 >= w4) 
            { 
                trzecia = w3; 
                czwarta = w4; 
            }
            else 
            { 
                trzecia = w4; 
                czwarta = w3; 
            }
        } 
        else if(w3 >= w2 && w3 >= w4) 
        {
            druga = w3;
            if(w2 >= w4) 
            { 
                trzecia = w2; 
                czwarta = w4; 
            }
            else 
            { 
                trzecia = w4; 
                czwarta = w2; 
            }
        } 
        else 
        {
            druga = w4;
            if(w2 >= w3) 
            { 
                trzecia = w2; 
                czwarta = w3; 
            }
            else 
            { 
                trzecia = w3; 
                czwarta = w2; 
            }
        }
    } 
    else if(w2 >= w1 && w2 >= w3 && w2 >= w4) 
    {
        pierwsza = w2;
        if(w1 >= w3 && w1 >= w4) 
        {
            druga = w1;
            if (w3 >= w4) 
            { 
                trzecia = w3; 
                czwarta = w4; 
            }
            else 
            { 
                trzecia = w4; 
                czwarta = w3; 
            }
        } 
        else if(w3 >= w1 && w3 >= w4) 
        {
            druga = w3;
            if(w1 >= w4) 
            { 
                trzecia = w1; 
                czwarta = w4; 
            }
            else 
            { 
                trzecia = w4; 
                czwarta = w1; 
            }
        } 
        else 
        {
            druga = w4;
            if(w1 >= w3) 
            { 
                trzecia = w1; 
                czwarta = w3; 
            }
            else 
            { 
                trzecia = w3; 
                czwarta = w1; 
            }
        }
    } 
    else if(w3 >= w1 && w3 >= w2 && w3 >= w4) 
    {
        pierwsza = w3;
        if(w1 >= w2 && w1 >= w4) 
        {
            druga = w1;
            if(w2 >= w4) 
            { 
                trzecia = w2; 
                czwarta = w4; 
            }
            else 
            { 
                trzecia = w4; 
                czwarta = w2; 
            }
        } 
        else if(w2 >= w1 && w2 >= w4) 
        {
            druga = w2;
            if(w1 >= w4) 
            { 
                trzecia = w1; 
                czwarta = w4; 
            }
            else 
            { 
                trzecia = w4; 
                czwarta = w1; 
            }
        } 
        else 
        {
            druga = w4;
            if(w1 >= w2) 
            { 
                trzecia = w1; 
                czwarta = w2; 
            }
            else 
            { 
                trzecia = w2; 
                czwarta = w1; 
            }
        }
    } 
    else 
    { 
        pierwsza = w4;
        if(w1 >= w2 && w1 >= w3) 
        {
            druga = w1;
            if(w2 >= w3) 
            { 
                trzecia = w2; 
                czwarta = w3; 
            }
            else 
            { 
                trzecia = w3; 
                czwarta = w2; 
            }
        } 
        else if(w2 >= w1 && w2 >= w3) 
        {
            druga = w2;
            if(w1 >= w3) 
            { 
                trzecia = w1; 
                czwarta = w3; 
            }
            else 
            { 
                trzecia = w3; 
                czwarta = w1; 
            }
        } 
        else 
        {
            druga = w3;
            if(w1 >= w2) 
            { 
                trzecia = w1; 
                czwarta = w2; 
            }
            else 
            { 
                trzecia = w2; 
                czwarta = w1; 
            }
        }
    }

    cout << pierwsza << ", " << druga << ", " << trzecia << ", " << czwarta << endl;
    
    return 0;
}
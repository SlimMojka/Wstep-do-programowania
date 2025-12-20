#include <iostream>
#include <cstdlib>

using namespace std;

void PechowaChoinka(int wysokosc) 
{
    cout << "--- UWAGA: KOLIZJA NA DRODZE NR 67 ---" << endl;

    for (int i = 0; i < wysokosc; i++) {
        int przesuniecie = rand() % 5; 
        
        for (int j = 0; j < wysokosc - i + przesuniecie; j++) {
            cout << " ";
        }

        for (int k = 0; k < (2 * i + 1); k++) 
        {
            if (rand() % 10 > 2) 
            {
                char igla = (rand() % 2 == 0) ? '*' : 'x';
                cout << igla;
            } else 
            {
                cout << " "; 
            }
        }
        cout << endl;
    }

    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < wysokosc + 1; j++) cout << " ";
        {
            cout << "| |" << endl;
        }
    }
    
    cout << "---------------------------------------" << endl;
    cout << "Status: Drzewko wymaga prostowania." << endl;
}

int main() 
{
    int h;
    cout << "Podaj wysokosc poszkodowanej choinki: ";
    cin >> h;

    if (h < 3) 
    {
        cout << "Zbyt mala, by w ogole ja zauwazyc na drodze!" << endl;
    } 
    else 
    {
        PechowaChoinka(h);
    }

    return 0;
}
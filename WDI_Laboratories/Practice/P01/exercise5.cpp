#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    /*
    Napisz program, który:
    * wczyta macierz `NxM`
    * utworzy jej transpozycję `MxN`
    * dostęp do danych realizuje przez wskaźniki
    */
    srand(time(NULL));

    int macierz[3][4]; // NxM

    int macierz_2[4][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            macierz[i][j] = rand() % 10 + 1;
            cout << setw(6) << macierz[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            *(*(macierz_2 + i) + j) = *(*(macierz + j) + i);
            cout << setw(6) << *(*(macierz_2 + i ) + j) << " ";
        }
        cout << "\n";
    }

}
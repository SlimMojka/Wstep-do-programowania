#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void findMax(int zakres[5][5])
{
    int max = zakres[0][0];
    int wiersz = 0;
    int kolumna = 0;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(max>=zakres[i][j])
                continue;
            else 
            {
                max = zakres[i][j];
                wiersz = i+1;
                kolumna = j+1;
            }
        }
    }

    cout << "Max wynosi: " << max << " oraz znajduje sie w " << wiersz << " wierszu oraz " << kolumna << " kolumnie" << endl;
}

using namespace std;

int main()
{
    // najdź największy element w tablicy dwuwymiarowej oraz jego pozycję (wiersz, kolumna).

    srand(time(NULL));

    int a = 5, b = 5;
    int tablica[5][5];

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            tablica[i][j] = rand() % 25 + 1;
            cout << setw(6) << tablica[i][j] << " ";
        }
        cout << "\n";
    }

    findMax(tablica);


}
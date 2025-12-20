#include <iostream>

using namespace std;

int main() {

    const int DLUGOSC_DANYCH = 10;
    int dane[DLUGOSC_DANYCH] = {7, 3, 1, 3, 9, 5, 2, 4, 2, 2};
    

    const int ROZMIAR_LICZNIKOW = 10;
    int liczniki[ROZMIAR_LICZNIKOW];


    for (int i = 0; i < ROZMIAR_LICZNIKOW; ++i) 
    {
        liczniki[i] = 0;
    }


    for (int i = 0; i < DLUGOSC_DANYCH; ++i) 
    {
        int cyfra = dane[i];
        

        if (cyfra >= 0 && cyfra <= 9) {
            liczniki[cyfra]++;
        }
    }


    cout << "Zliczanie wystapien cyfr:" << endl;
    

    for (int i = 0; i < ROZMIAR_LICZNIKOW; ++i) 
    {
        if (liczniki[i] > 0) {
            cout << "Cyfra " << i << " wystepuje " << liczniki[i] << " razy." << endl;
        }
    }

    return 0;
}
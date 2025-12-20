#include <iostream>

using namespace std;

int main() {
    int wysokoscFrontu = 12;
    int szerokoscFrontu = 14;
    int glebokosc = 4; // Szerokość dachu i bocznej ściany

    // --- 1. RYSOWANIE GÓRNEJ CZĘŚCI (DACH W PERSPEKTYWIE) ---
    for (int i = 0; i <= glebokosc; i++) {
        // Spacje wyrównujące dach, by "wchodził" w głąb (przesunięcie w lewo)
        for (int s = 0; s < glebokosc - i; s++) cout << " ";
        
        cout << "/"; // Lewa krawędź dachu
        for (int j = 0; j < szerokoscFrontu; j++) {
            if (i == 0) cout << "-"; // Sama góra dachu
            else cout << " ";        // Wnętrze dachu
        }
        cout << "/"; // Prawa krawędź dachu
        
        // Wypełnienie bocznej krawędzi schodzącej w dół
        for (int j = 0; j < i; j++) cout << " ";
        if (i > 0) cout << "|";
        
        cout << endl;
    }

    // --- 2. RYSOWANIE GŁÓWNEJ BRYŁY (FRONT + PRAWY BOK) ---
    for (int i = 0; i < wysokoscFrontu; i++) {
        // FRONT WIEŻOWCA
        cout << "|";
        for (int j = 0; j < szerokoscFrontu; j++) {
            // Tekstura elewacji jak na rysunku
            if (j % 2 == 0) cout << "+";
            else cout << "-";
        }
        cout << "|";

        // PRAWY BOK (TEKSTURA)
        for (int j = 0; j < glebokosc; j++) {
            if (j % 2 == 0) cout << "+";
            else cout << "|";
        }
        cout << "|";

        // --- 3. RYSOWANIE SAMOLOTU (OBOK WIEŻOWCA) ---
        int odstepSamolotu = 8;
        for (int s = 0; s < odstepSamolotu; s++) cout << " ";

        int pozSamolotu = 3; // Wysokość na której pojawia się samolot
        if (i == pozSamolotu) {
            cout << "  +   +";
        } else if (i == pozSamolotu + 1) {
            cout << "+++++++++";
        } else if (i == pozSamolotu + 2) {
            cout << "  +   +";
        }

        cout << endl;
    }

    // DOLNA KRAWĘDŹ
    cout << " ";
    for (int j = 0; j < szerokoscFrontu; j++) cout << "-";
    cout << endl;

    return 0;
}
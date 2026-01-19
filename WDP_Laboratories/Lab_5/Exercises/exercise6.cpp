#include <iostream>

using namespace std;

void sprawdzHaslo(string haslo)
{
    string temp_haslo;
    cout << "Podaj haslo: ";
    cin >> temp_haslo;

    while(true)
    {
        if(temp_haslo==haslo)
        {
            cout << "Haslo poprawne!";
            break;
        }
        else 
        {
            cout << "Haslo niepoprawne, sproboj ponownie: ";
            cin >> temp_haslo;
        }
    }

}

int main()
{
    string haslo = "haslo123";
    
    sprawdzHaslo(haslo);

    return 0;
 
}
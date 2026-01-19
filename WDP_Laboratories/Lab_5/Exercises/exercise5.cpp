#include <iostream>

using namespace std;

bool rokPrzestepny(int rok)
{
    if(rok%4==0)
        return true;
    else
        return false;
}

int main()
{
    int rok;

    cout << "Podaj rok: ";
    cin >> rok;

    if(rokPrzestepny(rok)==true)
        cout << "Rok jest przestepny";
    else 
        cout << "Rok jest nieprzestepny";

    return 0;
}
#include <iostream>
#include <cstdlib>
using namespace std;
 
void losuj_tablice(int tab[], int rozmiar, int zakres)
{
    for(int i=0; i<rozmiar; i++)
    tab[i]=rand()%zakres;
}
 
void wyswietl(int tab[], int rozmiar)
{
    for(int i=0;i<rozmiar;i++) cout << tab[i] << " ";
    cout << endl;
}
 
void sortowanie_przez_zliczanie(int t[], int rozmiar, int zakres)
{
    int wystepowanie[zakres] = {0};
    int index = 0;
    for(int i=0; i<rozmiar;i++)
    {
        wystepowanie[t[i]]++;
    }
    cout << "ilość wystąpień: " << endl;
    wyswietl(wystepowanie, rozmiar);
    for(int i=0; i<zakres;i++)
    {
        while(wystepowanie[i]>0)
        {
            t[index]=i;
            wystepowanie[i]--;
            index++;
        }
    }
    cout << "tablica po sortowaniu: " << endl;
    wyswietl(t, rozmiar);
}
 
int main()
{

    srand(time(NULL));
    int x = 10; 
    int z = 10; 
    int tab[x] = {6,3,8,1,1,9,7,1,2,3};
    sortowanie_przez_zliczanie(tab,x,z);

}
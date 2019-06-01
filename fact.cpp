#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned long long liczba, mnoznik = 1, i;
    liczba = mnoznik;
    
    cout<<"podaj liczbe: ";
    cin>>liczba;

    for(i=1; i<=liczba; i++)
    {
        mnoznik = mnoznik * i;
    }
   cout<<"Silnia z "<<liczba<<" = "<<mnoznik;
   return 0;
}

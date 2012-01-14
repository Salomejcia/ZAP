#include <iostream>
#include <string.h>

using namespace std;

struct Auto
{
    string marka;
    double cena;
    int rocznik;
};

int main()
{
    const int N = 5;
    Auto samochod[N];
    for (int i=0; i<N; i++)
    {
        cout<<"Podaj marke samochodu numer "<< i+1 <<".: ";
        cin>> samochod[i].marka;
        cout<<"Podaj cene samochodu numer "<< i+1 <<".: ";
        cin>> samochod[i].cena;
        cout<< "Podaj rocznik samochodu numer "<< i+1 <<".: ";
        cin>> samochod[i].rocznik;
    }
    char odp;
    cout<<"Czy uszeregowac wedlug ceny czy rocznika? (c-cena/r-rocznik) ";
    cin>>odp;
    if (odp=='c')
    {
        for (int j=0; j<N-1; j++)
        {
            int j_min=j;
            for(int k=j+1; k<N; k++)
            {
                if(samochod[k].cena<samochod[j_min].cena)
                {
                    j_min=k;
                }
                Auto temp;
                temp=samochod[j];
                samochod[j]=samochod[j_min];
                samochod[j_min]=temp;
            }
        }
        for (int i=0; i<N; i++)
        {
            cout<< i+1 <<". " << samochod[i].marka << " - cena: " << samochod[i].cena << " - rocznik: " << samochod[i].rocznik <<"\n";
        }
    }
    else if(odp=='r')
    {
        for (int j=0; j<N-1; j++)
        {
            int j_min=j;
            for(int k=j+1; k<N; k++)
            {
                if(samochod[k].rocznik<samochod[j_min].rocznik)
                {
                    j_min=k;
                }
                Auto temp;
                temp=samochod[j];
                samochod[j]=samochod[j_min];
                samochod[j_min]=temp;
            }
        }
        for (int i=0; i<N; i++)
        {
            cout<< i+1 <<". " << samochod[i].marka << " - cena: " << samochod[i].cena << " - rocznik: " << samochod[i].rocznik <<"\n";
        }
    }

        return 0;
}

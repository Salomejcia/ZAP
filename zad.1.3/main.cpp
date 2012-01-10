#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin>> m >> n;
    if (m>=n)
    {
        cout<<"Calkowita czesc dzielenia: " << m/n;
        cout<<"\nReszta z dzielenia: " << m%n;
    }
    else
    {
        cout<< "Calkowita reszta z dzielenia: " << n/m;
        cout<<"\nReszta z dzielenia: " << n%m;
    }
    return 0;
}

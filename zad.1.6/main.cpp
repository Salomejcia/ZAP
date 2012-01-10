#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<< "Podaj liczbe calkowita: ";
    cin>> a;
    if (9<a && a<100)
    {
        cout<< "Liczba dwucyfrowa dodatnia";
    }
    else
    {
        cout<< "Liczba inna";
    }

    return 0;
}

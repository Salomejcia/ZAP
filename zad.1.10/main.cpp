#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    double x;
    cout<< "Podaj liczbe zmeinnoprzecinkowa: ";
    cin>> x;

    if (x<0)
    {
    cout<< "\nWynik funkcji: " << 0;
    }
    else
    {
        cout<< "\nWynik funkcji wynosi: " << (sqrt(x)+x)/(2+x);
    }
    return 0;
}

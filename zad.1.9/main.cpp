#include <iostream>

using namespace std;

int main()
{
    double x;
    cout<< "Podaj liczbe zmiennoprzecinkowa, nierowna zeru: ";
    cin>>x;
    if(x==0)
    {
        cout<< "\nBlad, podaj ponownie liczbe zmiennoprzecinkowa: ";
        cin>>x;
    }

    cout<< "\nWynik ze wzoru: "<< 1/x;

    return 0;
}

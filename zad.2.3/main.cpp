#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbe calkowita wieksza od 1" << endl;
    cin>>n;
    double x;
    double a=0;
    double b=0;
    for(int i=0; i<n; i++)
    {
        cout<<"Podaj liczbe zmiennoprzecinkowa: ";
        cin>>x;
        if (x>a)
        {
            b=a;
            a=x;

        }
        else
        {
            if (x>b)
            {
                b=x;
            }
        }
    }
    cout<< "Najwieksze liczby z wczytanych to: " << a << " i " << b;

    return 0;
}

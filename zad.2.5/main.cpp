#include <iostream>

using namespace std;

int main()
{
    int k;
    cout<< "Podaj liczbe calkowita z zakresu 1 do 20: ";
    cin>>k;
    cout<<"\n";
    for (int i=0; i<k; i++)
    {
        {
            for (int j=0; j<k-i; j++)
            {
                cout<<" ";
            }
            for(int l=0; l<2*i+1; l++)
            {

                cout<< "*";
            }
            cout<<"\n";
        }
    }
    return 0;
}

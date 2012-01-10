#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>> a;
    if (a>0)
    {
        cout<< "Wartosc dodatnia.";
    }
    if (a<0)
    {
        cout<< "Wartosc ujemna.";
    }
    else
    {
        cout<< "Wartosc rowna zero.";
    }
    return 0;
}

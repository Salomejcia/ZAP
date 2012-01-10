#include <iostream>

using namespace std;

int main()
{
    char a;
    cin>> a;
    if (a>='A' && a<='Z')
    {
        cout<< "\nWprowadzono wielka litere.";
    }
    if (a>='a' && a<='z')
    {
        cout<< "\nWprowadzono mala litere.";
    }
    if (a>='1' && a<='9')
    {
        cout<< "\nWprowadzono cyfre.";
    }
    else
    {
        cout<< "\nWprowadzono inny znak.";
    }
    return 0;
}

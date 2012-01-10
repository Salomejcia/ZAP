#include <iostream>

using namespace std;

int main()
{
    char a;
    cin>>a;
    if (a>='A' && a<='Z')
    {
        cout<< "\nWprowadzono wielka litere.";
    }
    else
    {
        cout<< "\nWprowadzono inny znak.";
    }
    return 0;
}

#include <iostream>

using namespace std;

int fib_iter(int nr)
{
    int a, b;
    if(nr == 0)
    {
        return 0;
    }
    a = 0; b = 1;
    for(int i=0; i<nr; i++) {
        b += a;
        a = b-a;
    }
    return b;
}


int main()
{
    int n;
    cout<<"Ile takich liczb? ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int result = fib_iter(i);
        cout << "fib " << i <<".= " << result << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int fib_rec(int nr)
{
    if (nr==0)
    {
        return 0;
    }
    else
    {
        if (nr==1)
        {
            return 1;
        }
        else return  fib_rec(nr-1) + nr;
    }


}
int main()
{
    int n;
    cout<<"Ile takich liczb? ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int result = fib_rec(i);
        cout << "fib " << i <<".= " << result << endl;
    }
    return 0;
}

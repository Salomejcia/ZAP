#include <iostream>
#include<cmath>
using namespace std;

double odl (double x, double y)
{
    return sqrt(pow(x, 2)+pow(y, 2));
}
struct Punkt
{
    double x;
    double y;
};

int main()
{
    const int N=5;
    Punkt a[N];
    for(int i=0; i<N; i++)
    {
        cout<< "Podaj x" << i+1 << ":";
        cin>>a[i].x;
        cout<<  "Podaj y" << i+1 << ":";
        cin>>a[i].y;
    }

    for(int i=N-1; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
           if(odl(a[j].x, a[j].y)>odl(a[j+1].x, a[j+1].y))
           {
               Punkt temp= a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
        }
    }
    for(int i=0; i<N; i++)
        {
        cout<< "(" << a[i].x << ", " << a[i].y << "); ";
        }
    return 0;
}

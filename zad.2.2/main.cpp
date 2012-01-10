#include <iostream>
#include<cmath>

using namespace std;

int silnia(int nr)
{
    if(nr==0)
    {
        return 1;
    }
    int a;
    a=1;
    for(int i=1; i<=nr; i++)
    {
        a=a*i;
    }
    return a;
}

double funkcja(double x, double y)
{
    double a=0;
    for(int i=0; i<=10; i++)
    {
        a+= pow(x+y,i)/silnia(i);
    }
    return a;
}

int main()
{
    double y;
    double result;
    cout <<"Podaj liczbe:  " << endl;
    cin>>y;
    cout<<"Wyniki funkcji f(x, y) dla podanej wartosci : \n\n";
    for(double x=0.1; x<=10; x+=0.1)
    {
        if (sin(x)>cos(x))
        {
            result=funkcja(x, y);
        }
        else
        {
            result=pow(x, 5)+pow(x, 3)*pow(y, 2)+pow(y, 4);
        }
        cout<<"Wynik funkcji f("<<x<<", "<<y<<") = "<<result<<"\n";
    }
    return 0;
}

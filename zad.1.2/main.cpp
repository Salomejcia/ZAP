#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y, z;
    cin>> x >> y >> z;
    double d = sqrt(3 + pow(x+2*y, 2)) +z;
    cout<< "Ze wzoru wychodzi: " << d;
    return 0;
}

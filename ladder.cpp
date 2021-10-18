
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    double pi=2.0*acos(0.0);
    scanf("%d %d",&a,&b);
    printf("%.0f", ceil(a/sin(b*pi/180)));
    return 0;
}



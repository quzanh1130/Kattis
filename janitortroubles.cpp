
#include <bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    double p= (double)(a+b+c+d)/2.0 ;
    double value = sqrt( (p-a)*(p-b)*(p-c)*(p-d) );
    cout << setprecision(50) << value;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,n;
    scanf("%d %d %d",&x, &y, &n);
    for (int i=1; i<=n; ++i){
        if (i%x ==0 && i%y==0 ) {printf("FizzBuzz\n"); continue; }
        if (i%x ==0 ){ printf("Fizz\n"); continue; }
        if (i%y ==0 ){ printf("Buzz\n"); continue; }
        printf("%d\n",i);
    }
    return 0;
}

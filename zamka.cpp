#include <bits/stdc++.h>
using namespace std;

bool xet(int k, int n){
    int sum=0;
    while (k>0){
        sum+= k % 10;
        k= k/10;
    }
    if (sum==n) return true;
    return false;
}

int main()
{
    int x,y,n;
    scanf("%d %d %d", &x, &y, &n);
    int minn=y; int maxx=x;
   for (int i=x; i<=y; ++i){
        if (xet(i,n)){
            if (i> maxx) maxx= i;
            if (i< minn) minn= i;
        }
   }
    printf("%d\n%d",minn,maxx);
    return 0;
}

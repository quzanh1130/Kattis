#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p,q;
    scanf("%d %d %d",&n, &p,&q);
    if ( ((p+q) / n) %2 ==0 ) {
        printf("paul");
    } else printf("opponent");
    return 0;
}
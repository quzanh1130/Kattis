#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,a,dem=0;
    while (scanf("%d",&n)!=EOF){
        dem++;
        int maxx=-1000000, minn=1000000;
        for (int i=0; i<n; ++i){
            scanf("%d",&a);
            maxx=max(a,maxx);
            minn=min(a,minn);
        }
        printf("Case %d: %d %d %d\n",dem,minn,maxx,maxx-minn);
    }
    return 0;
}

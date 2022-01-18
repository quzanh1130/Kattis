#include <bits/stdc++.h>
using namespace std;


int main(){
    int n=1,m,h;
    while (n>0){
        scanf("%d",&n);
        if (n==-1) break;
        int sum=0, hour =0;
        for (int i=0; i<n; ++i){
            scanf("%d %d",&m,&h);
            sum+=(h-hour)*m;
            hour = h;
        }
        printf("%d miles\n",sum);

    }
    return 0;
}

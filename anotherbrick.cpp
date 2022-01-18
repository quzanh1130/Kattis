#include <bits/stdc++.h>
using namespace std;


int main() {
    int h,w,n,a,index; scanf("%d %d %d",&h,&w,&n);
    bool condi=true;
    index=0;
    for (int i=1; i<=h; i++){
        int sum=w;
        for (int j=index; j<n; j++){
            scanf("%d", &a);
            if (sum-a <0) {
                printf("NO");
                condi=false;
                break;
            } else sum-=a;
            if (sum==0) {
                index=j+1;
                break;
            }
        }
        if (condi==false) break;
        if (sum>0) { printf("NO"); condi=false; break; }
    }
    if (condi==true) printf("YES");
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b;
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        scanf("%d %d",&m,&a);
        int x=-1;
        for (int j=2; j<=m; j++){
            b=a;
            scanf("%d",&a);
            if (a != b+1 && x==-1) x=j; 
        }
        printf("%d\n",x);
    }

    return 0;
}

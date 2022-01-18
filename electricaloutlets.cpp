
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&m);
        int sum=0;
        for (int j=0; j<m; j++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        printf("%d\n",sum-m+1);
    }

    return 0;
}

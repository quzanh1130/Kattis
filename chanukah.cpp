
#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,k,n;
    scanf("%d", &p);
    for (int i=1; i<=p; i++){
        scanf("%d %d", &k, &n);
        int result=0;
        for (int j=1; j<=n; j++){
            result=result + (1+j);
        }
        printf("%d %d\n", i, result);
    }
    return 0;
}

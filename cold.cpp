
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int dem=0;
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
        if (a[i]<0) dem++;
    }
    printf("%d",dem);
    return 0;
}

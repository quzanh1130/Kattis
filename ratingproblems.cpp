#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,k,a; scanf("%d %d",&n,&k);
    int sum=0;
    for (int i=0; i<k; ++i){
        scanf("%d",&a);
        sum+=a;
    }
    cout << (sum+(n-k)*(-3))/(float)n << " " << (sum+(n-k)*3)/(float)n  ;
    return 0;
}

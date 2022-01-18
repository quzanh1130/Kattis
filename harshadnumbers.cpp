#include <bits/stdc++.h>
using namespace std;

int tachso(int n){
    int sum=0;
    while (n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

void dq(int n){
    if (n%tachso(n)==0) printf("%d",n); else dq(n+1);
}

int main(){
    int n; scanf("%d",&n);
    dq(n);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int dem=0;
    while (n>0){
        n-=i*i;
        if (n<0) {
            printf("%d", dem);
            break;
        }
        if (n==0){
            dem++;
            printf("%d",dem);
            break;
        }
        dem++;
        i+=2;
    }
    return 0;
}



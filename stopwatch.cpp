#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    if (n % 2 != 0) {
            printf("still running\n");
            return 0;
    }
    int value=0;
    int i=0;
    while (i <n){
        value+=(a[i+1]-a[i]);
        i+=2;
    }
    printf("%d",value);
    return 0;
}

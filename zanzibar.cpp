#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;  scanf("%d",&n);
    while (n--){
        int sum=0; int b=0;
        scanf("%d",&a);
        while (a!=0){
            b=a;
            scanf("%d",&a);
            if (a > b*2) sum+= a - b*2;
        }
        printf("%d\n",sum);
    }
    return 0;
}

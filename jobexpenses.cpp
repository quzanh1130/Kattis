#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n; scanf("%d", &n);
   int a;
   int sum=0;
   for (int i=0; i<n; i++){
        scanf("%d",&a);
        if (a <0) sum+=a;
   }
   printf("%d",abs(sum));
    return 0;
}

#include <bits/stdc++.h>
using namespace std;


int main()
{
   int n; scanf("%d",&n);
   int m=1, dk=(n/2)+(n%2), i=1;
   if (n==1) {printf("1"); return 0;}
   while (m<dk){
    m*=2;
    i++;
   }
   printf("%d",i+1);
   return 0;
}

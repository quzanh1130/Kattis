#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,h,v;
    scanf("%d %d %d",&n,&h,&v);
    cout << 4* max(n-h,h) * max(n-v,v);
    return 0;
}

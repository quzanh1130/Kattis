#include <bits/stdc++.h>
using namespace std;


int main(){
    int wc,hc,ws,hs;
    scanf("%d %d %d %d",&wc,&hc,&ws,&hs);
    if (wc > ws+1 && hc > hs+1) printf("1"); else printf("0");
    return 0;
}
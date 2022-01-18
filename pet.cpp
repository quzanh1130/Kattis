#include <bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c,d;
    int maxx=0; int index;
    for (int i=0; i<5; ++i){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a+b+c+d>maxx){
            maxx= a+b+c+d;
            index=i+1;
        }
    }
    printf("%d %d",index,maxx);
    return 0;
}
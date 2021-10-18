#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,b;
    float p;
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        scanf("%d %f",&b,&p);
        float average= (60*b)/p;
        printf("%.4f %.4f %.4f \n",average-(60/p),average,average+(60/p) );
    }
    return 0;
}

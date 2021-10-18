#include <bits/stdc++.h>
using namespace std;

int main(){
    double c,w,l;
    int n;
    scanf("%lf",&c);
    scanf("%d" ,&n);
    double sum=0.0;
    for (int i=0; i<n; i++){
        scanf("%lf %lf",&w,&l);
        sum+=w*l;
    }
    printf("%.7lf",sum*c);
    return 0;
}

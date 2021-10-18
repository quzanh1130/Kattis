#include <bits/stdc++.h>
using namespace std;

string result(int a, int b, int x){
    int value=sqrt(x*x-(a*a+b*b));
    if (value==0){
        return "right";
    } else return "wrong";
}

int main(){
        int a,b,c;
        a=1; b=1; c=1;
        while (a>0 && b>0 && c>0){
            scanf("%d %d %d", &a , &b, &c);
            if(a==0 && b==0 && c==0) break;
            if (a>=b && a>=c){
                    cout<< result(b,c,a) << endl;
            } else {
                if (b>=a && b >=c){
                    cout<< result(a,c,b) << endl;
                } else {
                    cout<< result(a,b,c) << endl;
                }
            }
        }
    return 0;
}
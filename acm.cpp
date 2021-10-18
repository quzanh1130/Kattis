#include <bits/stdc++.h>
using namespace std;

bool condition(int dem, char k, char b[],int n){
    for (int i=0; i<n; i++){
        if (b[i]==k){
            dem++;
        }
    }
    if (dem==0) {
       return true;
    } else return false;
}

int demso(char k, char b[],int n){
    int value=0;
    for (int i=0; i<n; i++){
        if (b[i]==k){
            value++;
        }
    }
    return value;
}

int main(){
    int a[1000];
    char b[1000];
    string c[1000];
    int n=0;
    int sum=0;
    int x,dem;
    a[n]=-2;
    while (a[n]!=-1){
        cin >>x;
        if (x==-1) break;
        a[n]=x;
        cin >> b[n] >> c[n];
        n++;
    }
    x=0;
    for (int i=0; i<n; i++){
        if (c[i]=="right"){
            x++;
            if (condition(dem, b[i],b,i)){
                sum+=a[i];
            } else {
                dem=demso(b[i],b,i);
                sum+=(a[i]+dem*20);
            }
        }
    }
    printf("%d %d",x,sum);
    return 0;
}

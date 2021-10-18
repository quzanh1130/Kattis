#include <iostream>
using namespace std;

int main(){
    int w;
    long long n,area;
    cin >> w >> n;
    int a[n][2];
    area =0;
    for (int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
        area+= a[i][0]*a[i][1];
       }
    cout << area/w;
    return 0;
}
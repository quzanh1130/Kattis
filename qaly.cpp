#include <iostream>
using namespace std;

int main (){
    int n;
    cin >>n;
    double a[n][2];
    double sum =0;
    for (int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
        sum += a[i][0]*a[i][1];
    }
    cout << sum;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int x,n;
    cin >> x >> n;
    int a[n];
    long long sum=0;
    for (int i=0; i<n; i++){
        cin >> a[i];
        sum+=a[i];
       }
    cout << x*(n+1)-sum;
    return 0;
}
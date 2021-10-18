#include <iostream>
using namespace std;
int result(int x){
    int a,b;
    a=x % 10;
    b=x/10;
    long long value=1;
    for (int i=1; i<=a; i++){
        value=value * b;
    }
    return value;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    long long sum=0;
    for (int i=0; i<n; i++){
        cin >> arr[i];
        sum += result(arr[i]);
    }
    cout << sum;
    return 0;
}

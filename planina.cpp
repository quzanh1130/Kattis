#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    long long value=1;
    for (int i=1; i<=n; i++){
        value= value * 2;
    }
    cout << (value+1)*(value+1);
    return 0;
}
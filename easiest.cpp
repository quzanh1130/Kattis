#include <bits/stdc++.h>
using namespace std;
const long double  pi = 4.0*atanl(1.0);
#define long long ll

int sumN(string s){
    int sum=0;
    for (auto x:s) sum+=x-'0';
    return sum;
}

int result(int sum,int n){
    for (int i=11; i<100005; i++){
        if (sumN(to_string(i*n))==sum) {
            return i;
        }
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while (true){
        int n; cin >> n;
        if (n==0) break;
        cout << result(sumN(to_string(n)),n ) << endl;
    }
    return 0;
}
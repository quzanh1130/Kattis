#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long double  pi = 4.0*atanl(1.0);

void solve(int n, int m){
    int i=ceil(m*1.0/n);
    int du=i-(m%i); if (m%i==0) du=0;
    m-=i;
    for (int j=0; j<i;j++) cout << "*"; cout << endl;
    while (m>0){
        if(m>=i*du){
            for (int j=0; j<i;j++) cout << "*"; cout << endl;
            m-=i;
        } else {
            for (int j=0; j<i-1;j++) cout << "*"; cout << endl;
            m-=(i-1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m; cin >> n >> m;
    solve(n,m);
    return 0;
}
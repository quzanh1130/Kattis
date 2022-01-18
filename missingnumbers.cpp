#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second

const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=200005;

int a[200];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n; 
    bool check=false;
    fort(i,1,n) cin >> a[i];
    a[0]=1;
    fort(i,a[0],a[1]-1) { cout << i << endl; check=true; }
    fort(i,1,n-1) {
        if (a[i]+1 != a[i+1]){
            fort(j,a[i]+1,a[i+1]-1){
                cout << j << endl;
            }
            check =true;
        }
    }
    if (!check) cout << "good job";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second

const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=105;

vector <int> a;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    a.resize(n+1);
    fort(i,0,n-1) cin >> a[i];
    sort(a.rbegin(), a.rend());
    int alice=0, bob=0;
    fort(i,0,n-1){
        if(i%2==0){
            alice+=a[i];
        } else {
            bob+=a[i];
        }
    }
    cout << alice << " " << bob << endl;
    return 0;
}
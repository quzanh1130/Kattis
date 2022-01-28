// NGUYEN QUOC ANH
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ff first
#define ss second
#define enld endl
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fort(i, a, b) for(ll i = a; i <= b; ++i)
#define fortt(i, a, b) for (ll i = a; i >= b; --i)

const long double  pi = 4.0*atanl(1.0);
const int oo = 100000000;
const int maxN=100000;

int solve(int e, int m){
    if (e==m && e==0) return 0;
    ll ans = 0;
    while (true){
        int tmp = 365 - e;
        ans += tmp;
        e = 0;
        m = (m+tmp)%687;
        if (e==0 && m==0) break;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int e,m; int i=0;
    while (cin >> e >> m){
        i++; cout << "Case " << i << ": " << solve(e,m) << endl;
    }
    return 0;
}
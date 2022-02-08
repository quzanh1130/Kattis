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
const int oo = 100000005;
const int maxN=200005;

vector <string> ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m; cin >> n >> m;
    vector <vector<string>> v;
    v.resize(n);
    fort (i,0,n-1){
        fort(j,0,m-1){
            string tmp; cin >> tmp;
            v[i].pb(tmp);
        }
    }
    fort(k,0,m-1){
        int count = 0;
        fort(i,0,n-1){
            fort(j,0,m-1){
                if (v[i][j] == v[0][k]){
                    count ++;
                    break;
                }
            }
        }
        if (count == n) ans.pb(v[0][k]);
    }
    sort(all(ans));
    cout << ans.size() << endl;
    for(auto x : ans) 
        cout << x << endl;
    return 0;
}
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
const int maxN=200005;

vector <int> b,r;

int solve(){
    if (r.size()==0 || b.size()==0) return 0;
    sort(rall(r)); sort(rall(b));
    int sum=0; int dem=0;
    int k = min(r.size(), b.size());
    fort(i,0,k-1){
        sum += b[i] + r[i];
        dem++;
    }
    return sum - dem*2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int cases; cin >> cases; 
    fort (i,1,cases){
        int n; cin >> n;
        while (n--){
            string s; cin >> s; 
            if (s[s.size()-1]=='B'){
                string tmp = s.substr(0,s.size()-1);
                b.push_back(stoi(tmp));
            } else {
                string tmp = s.substr(0,s.size()-1);
                r.push_back(stoi(tmp));
            }
        }
        cout << "Case #" << i << ": " << solve() << endl;
        r.clear(); b.clear();
    }
    return 0;
}
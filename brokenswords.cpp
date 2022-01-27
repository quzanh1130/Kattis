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
const int maxN=2000000;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n; cin >> n;
    ll x = 0, y =0;
    string s;
    while (n--){
        cin >> s;
        if (s[0] == '0') x++;
        if (s[1] == '0') x++;
        if (s[2] == '0') y++;
        if (s[3] == '0') y++;
    }

    ll swords = min (x / 2, y /2);
    cout << swords << " " << x - swords * 2 << " " << y - swords * 2 << endl;
    return 0;
}
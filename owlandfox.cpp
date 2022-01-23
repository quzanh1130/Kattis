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

int getNum(string s){
    int ans = 0;
    fort(i,0,s.size()-1){
        ans += s[i] - '0';
    }
    return ans;
}

string solve(string s){
    int k = getNum(s);
    if (k==1) return "0";
    for (int i = stoi(s)-1; i>=0; i--){
        if (getNum(to_string(i)) + 1==k) return to_string(i);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while (n--){
        string s; cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}
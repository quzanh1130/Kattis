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
const int oo = 1000000000;
const int maxN=100000;

vector <string> a,ans;
map <string,int> mp;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n; cin.ignore();
    while (n--){
        string s; getline(cin,s);
        mp[s]++;
        a.push_back(s);
    }
    vector<int> tmp;
    for(auto x : mp){
        tmp.push_back(x.ss);
    }
    sort(all(tmp));
    for(auto x : mp){
        if (x.ss==tmp[0]){
            ans.push_back(x.ff);
        }
    }
    sort(all(ans));
    for(auto x: ans){
        cout << x << endl;
    }
    return 0;
}
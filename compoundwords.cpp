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

vector <string> s,ans;
map <string,int> mp;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string tmp; 
    while (cin >> tmp){
        s.push_back(tmp);
    }

    fort(i,0,s.size()-1){
        fort(j,0,s.size()-1){
            if (i!=j) {
                string tmp= s[i] + s[j];
                if (mp.count(tmp) > 0) continue; else {
                    mp[tmp]++;
                    ans.push_back(tmp);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    for(auto x : ans){
        cout << x << endl;
    }

    return 0;
}
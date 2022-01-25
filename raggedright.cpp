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

vector <int> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; int n = -1;
    while (getline(cin,s)){
        int tmp = s.size();
        n = max (n , tmp);
        v.push_back(tmp);
    }
    int ans = 0;
    for (int i=0; i<v.size()-1; i++){
        ans += pow (abs(n-v[i]),2);
    }
    cout << ans << endl;
    return 0;
}
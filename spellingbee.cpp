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
#define read(a) scanf("%d", &a)
#define readd(a,b) scanf("%d %d", &a, &b)
#define wri(a) printf("%d ", a)
#define wril(a) printf("%d\n", a)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fort(i, a, b) for(ll i = a; i <= b; ++i)
#define fortt(i, a, b) for (ll i = a; i >= b; --i)
 
const long double  pi = 4.0*atanl(1.0);
const int oo = 100000000;
const int maxN=65000;

void timer(){
    //clock_t start = clock(); 
    //clock_t end = clock();   
    //double time_use = (double)(end - start) / CLOCKS_PER_SEC;
    //cout << time_use << endl;
}

vector <string> ans;
map <char,bool> mp;

bool check(string tmp, char m){
    if (tmp.size()<4) return false;
    bool ok = false;
    for(auto x:tmp){
        if (mp[x] == false) return false;
        if (x == m) ok = true;
    }
    if (ok) return true; else return false;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s; cin.ignore();
    int n; cin >> n; cin.ignore();
    for(char c = 'a'; c<='z'; c++) mp[c] = false;
    for(auto x : s) mp[x] = true;
    while(n--){
        string tmp; cin >> tmp;
        if (check(tmp,s[0])) ans.pb(tmp);
    }
    
    for(auto x: ans) cout << x << endl;
    return 0;
}
// NGUYEN QUOC ANH
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second

const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=200005;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    map<char,int> mp;
    string s; cin >> s;
    for ( auto x : s)
        mp[x]++;
    int dem=0;
    for (auto x:mp){
        if (x.second % 2 ==1) dem++;
    }
    dem--;
    if (dem<0) dem=0;
    cout << dem << endl;
    return 0;
}
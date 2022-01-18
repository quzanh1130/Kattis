#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second

const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=105;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    map <char,int> mp;
    for(auto x:s)
        mp[x]++;
    if (mp['B']==mp['W']) cout << "1"; else cout << "0";
    return 0;
}
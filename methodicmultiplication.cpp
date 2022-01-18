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

int dem(string s){
    int ans=0;
    for (auto x:s)
        if (x=='S') ans++;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s1,s2; cin >> s1 >> s2;
    if (s1=="0" || s2=="0") {cout << "0"; return 0;}
    int n=dem(s1) * dem(s2);
    string ans = "S()";
    fort(i,0,n-2){
        ans.insert(2+i*2,"S()");
    }
    ans.insert(n*2,"0");
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second

const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=200005;

int dem1=0, dem2=0, dem3=0;
string adr="ABC";
string bru="BABC";
string gor="CCAABB";


void whoiswin(){
    int mx = max(max(dem1,dem2),dem3);
    cout << mx << endl;
    if (dem1==mx) cout << "Adrian" << endl;
    if (dem2==mx) cout << "Bruno" << endl;
    if (dem3==mx) cout << "Goran" << endl;
}

void solve(string s, int n){
    int x=0,y=0,z=0;
    fort(i,0,n){
        if (s[i]==adr[x]) dem1++; 
        if (s[i]==bru[y]) dem2++; 
        if (s[i]==gor[z]) dem3++;
        x++; y++; z++;
        if (x>2) x=0;
        if (y>3) y=0;
        if (z>5) z=0;
    }
    whoiswin();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    string s; cin >> s;
    solve(s,n);
    return 0;
}
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

vector <string> v1,v2;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >>n;
    while (n--){
        string s; cin >> s;
        v1.push_back(s);
    }
    v2 = v1;
    sort(all(v2)); bool check1 = true;
    fort(i,0,v1.size()-1){
        if (v1[i]!=v2[i]) {check1 = false; break;}
    }
    if (check1) {cout << "INCREASING" << endl; return 0;}
    v2 = v1;
    sort(rall(v2)); bool check2 = true;
    fort(i,0,v1.size()-1){
        if (v1[i] != v2[i]) {check2 =false; break;}
    }
    if (check2) {cout << "DECREASING" << endl; return 0;}
    cout << "NEITHER" << endl; 
    return 0;
}
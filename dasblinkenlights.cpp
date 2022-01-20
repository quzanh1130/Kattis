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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a,b,s; cin >> a >> b >> s;
    bool light_a = false, light_b=false;
    int x = a, y = b;
    int dem=0;
    fort(i,1,s){
        if (i==x){
            light_a = true;
            x = x + a;
        } else light_a = false;
        if (i==y){
            light_b = true;
            y = y + b;
        } else light_b = false;
        if (light_a == true && light_b == true) dem++;
    }
    if (dem>0) cout << "yes" << endl; else cout << "no" << endl;
    return 0;
}
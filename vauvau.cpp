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

int a,b,c,d; 
int v[5];

int check(int x, int y, int k){
    int t1 = 0, t2 = 0;
    bool l=true;
    while (t2 < k){
        if (l==true){
            t1=t2; 
            t2+=x;
            if (k> t1 && k<=t2) return 1;
            l = false;
        } else {
            t1 = t2;
            t2 += y;
            l=true;
        }
    }
    return 0;
}

string solve(int k){
    int ans = check(a,b,k) + check(c,d,k);
    if (ans == 0){
        return "none";
    } else if (ans == 1){
        return "one";
    } else return "both";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c >> d;
    fort(i,0,2) cin >> v[i];
    fort(i,0,2){
        cout << solve(v[i]) << endl;
    }
    return 0;
}
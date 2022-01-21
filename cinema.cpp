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

vector <int>  a;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m,n; cin >> m >> n;
    int sum = 0; int dem=0;
    fort(i,1,n){
        int tmp; cin >> tmp;
        a.push_back(tmp);
        if (sum + tmp <= m){
            sum += tmp;
            dem++;
        }
    }
    cout << n - dem << endl;
    return 0;
}
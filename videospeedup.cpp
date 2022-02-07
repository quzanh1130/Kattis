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
const int oo = 1000000000;
const int maxN=100000;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,p,k; cin >> n >> p >> k;
    int a[n+2];
    a[0] = 0; 
    a[n+1] = k;
    fort(i,1,n)
        cin >> a[i];
    double time = 0; double speed = 1;

    fort(i,0,n){
        time += (a[i+1] - a[i]) * speed;
        speed += p * 1.0/100.0;
    }
    cout << fixed << setprecision(10) << time << endl;
    return 0;
}
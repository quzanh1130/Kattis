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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    ll a=1, b=0;
    fort(i, 1, n){
      ll tmpa,tmpb;
      tmpa=b;
      tmpb= a +b;
      a = tmpa;
      b= tmpb;
    }
    cout << a << " " << b << endl;
    return 0;
}
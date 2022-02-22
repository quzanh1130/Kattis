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
#define read(a) scanf("%d", &a)
#define readd(a,b) scanf("%d %d", &a, &b)
#define wri(a) printf("%d ", a)
#define wril(a) printf("%d\n", a)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fort(i, a, b) for(ll i = a; i <= b; ++i)
#define fortt(i, a, b) for (ll i = a; i >= b; --i)
 
const long double  pi = 4.0*atanl(1.0);
const int oo = 100000000;
const int maxN=65000;

void timer(){
    //clock_t start = clock(); 
    //....
    //clock_t end = clock();   
    //double time_use = (double)(end - start) / CLOCKS_PER_SEC;
    //cout << time_use << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a,b,c,l; cin >> a >> b >>c >>l;
    int mn = min ( min(a,b),c);
    int ak = 0;
    bool ok = true;
    while (ak * mn <l ){
        ak++;
    }
    fort(i,0,ak){
        if (i * a > l) break;
        int h = i * a;
        fort(j,0,ak){
            if (j * b + h > l) break;
            int hh = h + j * b;
            fort(k,0,ak){
                if ( k * c +hh > l) break;
                if (i*a + j*b + k*c == l){
                    cout << i << " " << j << " " << k << endl;
                    ok = false;
                }
            }
        }
    }
    if (ok) cout << "impossible" << endl;
    return 0;
}
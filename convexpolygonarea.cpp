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

struct Point{
    int x;
    int y;
};


 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int m; cin >> m; 
        vector <Point> v;
        fort(i,1,m){
            int a,b; cin >> a >> b;
            v.push_back({a,b});
        }
        v.pb(v[0]);
        int mul1 = 0, mul2= 0;
        fort(i,0,m-1){
            mul1 += (v[i].x * v[i+1].y);
            mul2 += (v[i].y * v[i+1].x);
        }
        double ans = (mul1 - mul2) * 1.0/2;
        cout << ans << endl;
    }
    return 0;
}
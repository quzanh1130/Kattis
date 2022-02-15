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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int k,m;
    while (cin >> k && k != 0 && cin >> m){
        unordered_set<string> keys;
        fort(i,0,k-1){
            string tmp; cin >> tmp; 
            keys.insert(tmp);
        }
        bool ok = true;
        fort(i,0,m-1){
            int n, l; cin >> n >> l;
            int count = 0 ;
            fort(j,0,n-1){
                string tmp; cin >> tmp; 
                if (keys.count(tmp) > 0) count ++;
            }
            if (count < l) ok = false;
        }
        if (ok){
            cout << "yes" << endl;
        }  else {
            cout << "no" << endl;
        }
    } 
    return 0;
}
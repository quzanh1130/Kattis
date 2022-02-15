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

vector <string> ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        cin.ignore();
        string name; getline(cin, name);
        bool ok1 = false, ok2 = false;
        fort(i,1,n){
            string tmp; getline(cin, tmp);
            if (tmp == "pancakes") ok1 = true;
            if (tmp == "pea soup") ok2 = true;
        }
        if (ok1 == true && ok2 == true) ans.pb(name);
    }
    if (ans.size() == 0){
        cout << "Anywhere is fine I guess" << endl;
    } else {
        cout << ans[0] << endl;
    }
    return 0;
}
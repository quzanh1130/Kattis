#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second

const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=105;

int a[105];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    long double minutes=0, second=0;
    while (n--){
        int m,s; cin >> m >> s;
        minutes +=m;
        second +=s;
    }
    long double tmp = (second/(minutes*60));
    if (tmp <=1) cout << "measurement error" << endl; else
        cout << fixed << setprecision(10) << tmp << endl;
    return 0;
}
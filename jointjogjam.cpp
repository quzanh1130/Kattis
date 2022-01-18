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
    int x1,y1,x2,y2,x3,y3,x4,y4; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    long double s = pow(x2-x1,2) + pow(y2-y1,2);
    s=sqrt(s);
    long double e = pow(x4-x3,2) + pow(y4-y3,2);
    e=sqrt(e);
    cout << fixed << setprecision(10) << max(s,e) << endl;
    return 0;
}
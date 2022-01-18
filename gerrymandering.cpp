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

vector <int> a,b;
int v=0,wa=0,wb=0;

void solve(int d){
    fort(i,1,d){
        if (a[i] > b[i]) {
            wa+= a[i] - trunc((a[i]+b[i])*1.0/2) -1;
            wb += b[i];
            cout << "A " << a[i] - trunc((a[i]+b[i])*1.0/2) -1 << " " << b[i] << endl;
        } else {
            wb+= b[i] - trunc((a[i]+b[i])*1.0/2) -1;
            wa += a[i];
            cout << "B " <<  a[i] << " " << b[i] - trunc((a[i]+b[i])*1.0/2) -1 << endl;
        }
    }
    cout << fixed << setprecision(10) << abs((wa-wb))*1.0/v;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int p,d; cin >> p >> d;
    a.resize(d+1); b.resize(d+1);
    while(p--){
        int x,y,z; cin >> x >> y >> z;
        a[x] +=y;
        b[x] +=z;
        v+= y+z; 
    }
    solve(d);
    return 0;
}
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

int UCLN(int x, int y){
    int ans=0;
    fortt(i,max(x,y)/2,2)
        if (x%i==0 && y%i==0) 
            return i;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n; n--;
    int a; cin >> a;
    while (n--){
        int tmp; cin >> tmp;
        if (a%tmp==0){
            cout << a / tmp << "/1" << endl;
        } else {
            int uc=UCLN(a,tmp);
            cout << a/uc << "/" << tmp/uc << endl;
        }
    }
    return 0;
}
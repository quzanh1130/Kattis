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
    while (n--){
        string s; cin >> s;
        reverse(s.begin(), s.end());
        fort(i,0,s.size()-1){
            int d= s[i] - '0';
            if (i%2==1){
                d*=2;
                if (d<=9) a[i]=d; else a[i]= d%10 + d/10;
            } else a[i]=d;
        }
        int sum=0;
        fort(i,0,s.size()-1)
            sum+=a[i];
        if (sum%10==0) cout << "PASS" << endl; else cout << "FAIL" << endl; 
    }
    return 0;
}
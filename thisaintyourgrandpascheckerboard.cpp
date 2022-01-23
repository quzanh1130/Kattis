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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fort(i, a, b) for(ll i = a; i <= b; ++i)
#define fortt(i, a, b) for (ll i = a; i >= b; --i)

const long double  pi = 4.0*atanl(1.0);
const int oo = 100000000;
const int maxN=200005;

char c[30][30];

int solve(int n){
    // xet cot
    fort(i,0,n-1){
        int demt1 = 0, demt2 =0, demb = 0, demw=0;
        fort(j,0,n-1){
            if (c[i][j]=='B'){
                demb++;
                demt2=0;
                demt1++;
            } else {
                demw++;
                demt1=0;
                demt2++;
            }
            if (demt1>=3 || demt2>=3) return 0;
        }
        if (demb!=demw) return 0;
    }
    // xet dong
    fort(i,0,n-1){
        int demt1 = 0, demt2 =0, demb = 0, demw=0;
        fort(j,0,n-1){
            if (c[j][i]=='B'){
                demb++;
                demt2=0;
                demt1++;
            } else {
                demw++;
                demt1=0;
                demt2++;
            }
            if (demt1>=3 || demt2>=3) return 0;
        }
        if (demb!=demw) return 0;
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    fort(i,0,n-1){
        fort(j,0,n-1){
            cin >> c[i][j];
        }
    }
    cout << solve(n) << endl;
    return 0;
}
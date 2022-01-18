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
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)

const long double  pi = 4.0*atanl(1.0);
const int oo = 100000000;
const int maxN=200005;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,c;
    while(cin >> n >> c){
        if (n==0 && c==0) break;
        if ( c + n == 13) {
             cout << "Never speak again." << endl;
        } else if ( c > n){
            cout << "Left beehind." << endl;
        } else if (n > c){
            cout << "To the convention." << endl;
        } else cout << "Undecided." << endl;
    }
    return 0;
}
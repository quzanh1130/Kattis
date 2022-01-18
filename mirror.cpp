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

char a[50][50];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int cases; cin >> cases; 
    fort(i,1,cases){
        int n,m; cin >> n >> m;
        fort(i,0,n-1){
            fort(j,0,m-1){
                cin >> a[i][j];
            }
        }
        cout << "Test " << i << endl; 
        fortt(i,n-1,0){
            fortt(j,m-1,0){
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
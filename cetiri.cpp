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

vector<int> a;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    fort(i,0,2){
        int tmp; cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    int x = a[1] - a[0];
    int y = a[2] - a[1]; 
    if (x == y){
        cout << a[2] + x << endl;
    } else if(x > y){
        cout << a[0] + y << endl;
    } else {
        cout << a[1] + x << endl;
    }
    return 0;
}
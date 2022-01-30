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
const int maxN=100000;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a,b; cin >> a >> b;
    if (a <= b) {
        if ( b-a == 1 || b-a ==0)
            cout << "Dr. Chaz will have " << b - a << " piece of chicken left over!" << endl;
        else 
            cout << "Dr. Chaz will have " << b - a << " pieces of chicken left over!" << endl;
    } else {
        if (a-b==1)
            cout << "Dr. Chaz needs " << a - b << " more piece of chicken!" << endl;
        else
            cout << "Dr. Chaz needs " << a - b << " more pieces of chicken!" << endl;
    }
    return 0;
}
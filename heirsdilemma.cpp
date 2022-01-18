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

bool check(int n) {
    int tmp = n;
    map <int,int> mp;
    while(n > 0) {
        if((n%10) == 0) return false;
        if(tmp % (n%10) != 0) return false;
        mp[n%10]++;
        n /= 10;
    }
    for(auto i : mp) {
        if(i.ss > 1) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int l,h; cin >> l >> h;
    int count= 0;
    fort(i,l,h){
        if (check(i)) count ++;
    }
    cout << count << endl;
    return 0;
}
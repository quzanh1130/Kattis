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
    int k; cin >> k;
    string s1,s2; cin >> s1 >> s2;
    int n = s1.size();
    int diff = 0, same =0;
    fort(i,0,n-1){
        if (s1[i]!=s2[i]) diff++; else same++;
    }
    
    int swaps = n - k;
    int l = min(swaps,diff);

    swaps-=l;
    same += l;
    
    cout << same - swaps << endl;
    return 0;
}
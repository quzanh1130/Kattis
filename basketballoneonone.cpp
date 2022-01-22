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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s; 
    int n = s.size();
    int a=0, b=0; 
    for(int i=0; i<=n; i+=2){
        if (s[i]=='A'){
            a+= s[i+1] - '0';
        } else {
            b+= s[i+1] - '0';
        }

        if(a >= 11 && a-b >= 2) {
            cout << "A" << endl;
            return 0;
        }

        if(b >= 11 && b-a >= 2) {
            cout << "B" << endl;
            return 0;
        }   
    }
}
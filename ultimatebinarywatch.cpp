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
#define read(a) scanf("%d", &a)
#define readd(a,b) scanf("%d %d", &a, &b)
#define wri(a) printf("%d ", a)
#define wril(a) printf("%d\n", a)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fort(i, a, b) for(ll i = a; i <= b; ++i)
#define fortt(i, a, b) for (ll i = a; i >= b; --i)

const long double  pi = 4.0*atanl(1.0);
const int oo = 100000000;
const int maxN=65000;

void timer(){
    //clock_t start = clock();
    //....
    //clock_t end = clock();
    //double time_use = (double)(end - start) / CLOCKS_PER_SEC;
    //cout << time_use << endl;
}

string toBinary(char c){
    int x = c - '0';
    string ans = "";
    while (x > 0) {
        char k =  (x%2)+'0';
        ans = k + ans;
        x = x/2;
    }
    while (ans.size() < 4 ) ans = '0' + ans;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    vector<string> v; 
    for(auto x : s) {
        v.pb(toBinary(x));
    }
    for(int i = 0; i < v.size(); i++) {
        for (int j= 0; j < v[i].size(); j++){
            char c;
            if (v[j][i] == '0') c ='.'; else c='*';
            if (j==0) cout << c; else {
                if (j==2) {
                cout << "   " << c;
                } else {
                cout << " " << c;
                }
            }
        }
        cout << endl;
    }
    return 0;
}


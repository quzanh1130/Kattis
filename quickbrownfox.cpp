#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second

const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=200005;

map <char,int> mp;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    cin.ignore();
    while (n--){
        string s; getline(cin, s);
        for(auto x:s){
            if ((x >= 'a' && x <= 'z' || (x >= 'A') && x <= 'Z') ) mp[tolower(x)]++;
        }
        if (mp.size()==26) cout << "pangram" << endl; else {
            cout << "missing ";
            for (char i='a'; i<='z'; i++){
                if (mp.count(i)<=0) cout << i;
            }
            cout << endl;
        }
        mp.clear();
    }
    return 0;
}

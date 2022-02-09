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
const int oo = 100000005;
const int maxN=200005;

string lover(string s){
    string ans = "";
    fort(i,0,s.size()-1){
        ans += tolower(s[i]);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int p,t; cin >> p >> t;
    cin.ignore();
    int count = 0;
    fort(i,1,p){
        bool accept = true;
        fort(j,1,t){
            string tmp; cin >> tmp;
            fort(k,1,tmp.size()-1)
                if(tmp[k]>='A' && tmp[k]<='Z'){
                    accept = false;
                    break;
                }
        }
        if(accept) count++;
    }
    cout << count << endl;
    return 0;
}
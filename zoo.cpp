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
    int n; int i= 0;
    while(cin >> n && n!=0){
        cin.ignore(); i++;
        cout << "List " << i << ":" << endl;
        vector <string> animals;
        fort(k,1,n){
            string s; getline(cin,s);
            vector<string> v;
            int x = 0;
            fort(i,0,s.size()-1){
                if (s[i]==' '){
                    string tmp = s.substr(0,i-x);
                    v.pb(tmp);
                    x=i+1;
                }
            }
            v.pb(s.substr(x,s.size()-x));
            animals.pb(lover(v[v.size()-1]));
        }
        sort(all(animals));
        map<string,int> mp;
        fort(i,0,animals.size()-1){
            mp[animals[i]]++;
        }
        for(auto x : mp)
            cout << x.ff << " | " << x.ss << endl;
    }
    return 0;
}
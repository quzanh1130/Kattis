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
const int oo = 1000000000;
const int maxN=100000;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    while (cin >> n && n!=0){
        vector <vector<string>> v(n);
        vector<string> name;
        set<string> st;
        cin.ignore();
        fort(i,0,n-1){
            string s; cin >> s;
            name.push_back(s);

            cin. ignore(); getline(cin, s);
            int x = 0;
            fort(j,0,s.size()-1){
                if (s[j]==' '){
                    string tmp = s.substr(x,j-x);
                    x=j+1;
                    v[i].push_back(tmp);
                    if (st.find(tmp) != st.end()) continue; else st.insert(tmp);
                }
            }
            string temp = s.substr(x,s.size()-x);
            v[i].push_back(temp);
            if (st.find(temp) != st.end()) continue; else st.insert(temp);
        }

        for(auto x: st){
            cout << x;
            vector <string> res; 
            fort(i,0,n-1){
                fort(j,0,v[i].size()-1){
                    if (v[i][j]==x) res.push_back(name[i]);
                }
            }
            sort(all(res));
            for(auto k : res) cout << " " << k;
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
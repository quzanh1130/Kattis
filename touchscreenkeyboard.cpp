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

vector <string> a;
map <char,pair<int,int>> pos;

void Khoitao(){
    a.pb("qwertyuiop");
    a.pb("asdfghjkl");
    a.pb("zxcvbnm");

    fort(i,0,2){
        fort(j,0,a[i].size()-1){
            pos[a[i][j]] = {i,j};
        }
    }
}

int distance(pair<int,int> p1, pair<int,int> p2){
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}

bool cmp(pair<string,int> p1, pair<string,int> p2){
    if (p1==p2) return false;
    if (p1.ss == p2.ss){
        return p1.ff < p2.ff;
    }
    return p1.ss < p2.ss;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    Khoitao();
    while (n--){
        string s; int m; cin >> s >> m;
        vector<pair<string,int>> v;

        fort(i,1,m){
            string tmp; cin >> tmp;
            int d = 0;
            fort(k,0,s.size()-1){
                pair<int,int> p1 = pos[s[k]];
                pair<int,int> p2 = pos[tmp[k]];
                d+= distance(p1,p2);
            }
            v.pb({tmp,d});
        }
        sort(all(v),cmp);
        for(auto x : v){
            cout << x.ff << " " << x.ss << endl;
        }
    }
    return 0;
}
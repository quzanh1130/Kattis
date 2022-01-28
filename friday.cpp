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

vector<int> month;

int solve(){
    map <int,int> fr;
    fr[13]=0;
    int k = 7;
    fort(i,0,month.size()-1){
        fort(j,1,month[i]){
            if (k==1 || k==2 || k==3 || k==4 || k==6){
                k++;
            } else if (k==7){
                k=1;
            } else if(k==5 && j==13) {fr[13]++; k++;} else k++;
        }
    }
    return fr[13];
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--){
        int d,m; cin >> d >> m; 
        fort(i,1,m){
            int tmp; cin >> tmp; 
            month.push_back(tmp);
        }
        cout << solve() << endl;
        month.clear();
    }
    return 0;
}
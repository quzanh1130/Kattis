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
const int maxN=2000000;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s1, s2; cin >> s1 >> s2;
    int n1 = s1.size();
    int n2 = s2.size();
    int x,y; bool check =true;

    for (int i=0; i<n1; i++){
        if (check)
            for (int j=0; j<n2; j++){
                if (s1[i] == s2[j]){
                    x = i;
                    y = j;
                    check = false;
                    break;
                }
        } else break;
    }

    vector<vector<char>> ans(n2, vector<char>(n1, '.'));

    for (int i = 0; i<n2; i++){
        ans[i][x] = s2[i];
    }

    for (int i = 0; i<n1; i++){
        ans[y][i] = s1[i];
    }

    fort(i,0,n2-1){
        fort(j,0,n1-1){
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}
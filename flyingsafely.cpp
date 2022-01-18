#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second

const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=105;

vector <int> a[1005];
bool visited[1005];
int n,m; int dem;

void doc(){
    fort(i,1,m){
        int u,v; cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    fort(i,1,n)
        visited[i]=false;
}

void dfs(int u){
    visited[u]=true; dem++;
    //cout << u << " ";
    fort(i,0,a[u].size()-1){
        if (visited[a[u][i]]==false)
            dfs(a[u][i]);
    }
}

void solve(){
    dem=0;
    doc();
    dfs(1);
    cout << dem-1 << endl;
    fort(i,1,n) a[i].clear();
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int cases; cin >> cases;
    while (cases--) {
        cin >> n >> m;
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> a,b,ans;

void solve(int x, int y){
    ans.resize(x+y+1);
    for (int i=0; i<=x; i++)
        for (int j=0; j<=y; j++){
            int tmp= a[i]*b[j];
            ans[i+j]+=tmp;
        }
    cout << x+y << endl;
    for (int i=x+y; i>=0; i--) cout << ans[i] << " ";
    cout << endl;
    ans.clear();
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while (n--){
        int x; cin >> x; a.resize(x); 
        for (int i=x; i>=0; i--) cin >> a[i];
        int y; cin >> y; b.resize(y);
        for (int i=y; i>=0; i--) cin >> b[i];
        solve(x,y);
    }
    return 0;
}

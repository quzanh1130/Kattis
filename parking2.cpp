#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while (n--){
        int cases; cin >> cases;
        int tmp, mn,mx;
        cin >> tmp;
        mn=tmp; mx=tmp;
        for (int i=0; i<cases-1; i++){
            cin >> tmp;
            mn=min(mn,tmp); 
            mx=max(mx,tmp);
        }
        cout << (mx-mn)*2 << endl;
    }
    return 0;
}

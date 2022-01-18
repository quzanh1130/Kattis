#include <bits/stdc++.h>
using namespace std;
const long double  pi = 4.0*atanl(1.0);
#define long long ll

vector<string> s;

void solve(int n){
    int left=0; int right=n-1;
    vector<string> ans; ans.resize(n);
    for (int i=0; i<n; i++){
        if(i%2==0){
            ans[left]=s[i];
            left++;
        } else {
            ans[right]=s[i];
            right--;
        }
    }
    for (auto x:ans) cout << x << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int index=1;
    while (true){
        int n; cin >> n;
        if (n==0) break;
        s.resize(n);
        cout << "SET " << index << endl; index++;
        for (int i=0; i<n; i++) cin >> s[i];
        solve(n);
    }
    return 0;
}
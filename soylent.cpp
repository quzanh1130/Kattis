#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a,n; cin >> n;
    while (n--){
        cin >> a;
        if (a > (a/400)*400) cout << (a/400)+1 << endl;
        else cout << a/400 << endl;
    }
    return 0;
}
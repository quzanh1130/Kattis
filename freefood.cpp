#include <bits/stdc++.h>
#define ll long long
using namespace std;
map <int,int> mp;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while (n--){
        int a,b; cin >> a >> b;
        for (int i=a; i<=b; i++) mp[i]++;
    }
    cout << mp.size();
    return 0;
}

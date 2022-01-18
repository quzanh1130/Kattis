#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    map <int,int> mp;
    for (int i=1; i<=10; i++){
        int a; cin >> a; 
        mp[a % 42]++;
    }
    cout << mp.size();
    return 0;
}

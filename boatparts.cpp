#include <bits/stdc++.h>
#define ll long long
using namespace std;

map <string,int> mp;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int p,n; cin >> p >> n;
    int day=0; bool check=true;
    for (int i=1; i<=n; i++){
        string s; cin >> s;
        mp[s]++;
        if (mp.size()==p && check) { day=i; check=false; }
    }
    if (day>0) cout << day; else cout << "paradox avoided";
    return 0;
}

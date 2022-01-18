#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s1,s2; cin >> s1 >> s2;
    map <char,int> mp;
    for (auto x:s1) mp[x]++;
    int dem1=0; int dem2=0;
    for (int x:s2) if (mp.count(x)>0) {dem1++; if(dem1==mp.size()) break;} else dem2++;
    if (dem2>=10) cout << "LOSE"; else cout << "WIN";
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

map <char,int> mp;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    while (cin >> s) mp[s[0]]++;
    int mx=0;
    for (auto i:mp) mx=max(mx,i.second);
    cout << mx;
    return 0;
}

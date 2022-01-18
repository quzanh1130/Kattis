#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; getline(cin,s);
    int n=s.size();
    string tmp="";
    map <string,int> mp;
    for (int i=0; i<n; i++){
        if (s[i]==' '){
            mp[tmp]++; 
            if (mp[tmp]==2) {cout << "no"; return 0; }
            tmp="";
        }
        else tmp=tmp+s[i];
    }
    mp[tmp]++; 
    if (mp[tmp]==2) {cout << "no"; return 0; }
    cout << "yes";
    return 0;
}

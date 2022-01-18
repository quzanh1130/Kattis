#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    map <char,int > mp;
    char c;
    for (int i=0; i<s.size(); i++){
        mp[s[i]]++;
        if (i==0) { c=s[i]; cout << s[i] ; continue; }
        if (mp[s[i]]==1) cout << s[i];
        if (c!=s[i]) mp.erase(c);
        c=s[i];
    }
    return 0;
}

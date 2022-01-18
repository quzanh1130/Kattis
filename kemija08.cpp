#include <bits/stdc++.h>
#define ll long long
using namespace std;

map <string,int> mp;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string ans=""; 
    int i=0;
    string s; getline(cin,s);
    while (i<s.size()){
        if (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            ans=ans+s[i];
            i++;
        } else {
            ans=ans+s[i];
            i+=3;
        }
    }
    cout << ans;
    return 0;
}

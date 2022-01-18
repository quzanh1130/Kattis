#include <bits/stdc++.h>
#define ll long long
using namespace std;

map <string,int> mp;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    int p=13,k=13,h=13,t=13;
    for (int i=0; i<s.size();i+=3){
        string tmp=s.substr(i,3);
        mp[tmp]++;
        if (mp[tmp]==2) {cout << "GRESKA"; return 0;}
        switch (s[i]){
            case 'P':
            p--;
            break;
            case 'K':
            k--;
            break;
             case 'H':
            h--;
            break;
             case 'T':
            t--;
            break;
        }
    }
    cout << p << " " << k << " " << h << " "<<t;
    return 0;
}

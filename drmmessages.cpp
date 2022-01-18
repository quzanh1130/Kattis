#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long double  pi   = 4.0*atanl(1.0);

map<char,int> mp1;
map<int,char> mp2;

void khoitao(){
    for (char i='A',j=0; i<='Z',j<26; i++,j++){
        mp1[i]=j;
        mp2[j]=i;
    }
}

string bdoi(string s){
    string ans=""; int point=0;
    for (auto x:s) point+=x-'A'; 
    point%=26;
    for (auto x:s) ans+=mp2[(mp1[x]+point)%26];
    return ans;
}

string gop(string s1, string s2){
    string ans="";
    for (int i=0; i<s1.size(); i++) ans+=mp2[(mp1[s1[i]]+mp1[s2[i]])%26];
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    khoitao(); 
    string s; cin >> s;
    string s1=s.substr(0,s.size()/2);
    string s2=s.substr((s.size())/2,s.size()/2);
    cout << gop(bdoi(s1),bdoi(s2));
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    int sum=0;
    string s1="0",s2="0";
    bool check=false;
    for (auto x: s){
        if (x>='0' && x<='9' && check==false) { s1=s1+x;} else 
        if (x>='0' && x<='9' && check==true) { s2=s2+x; } else 
        if (x=='-') {check=true;} else
        if (x==';' && check==true) {sum+=stoi(s2)-stoi(s1)+1; check=false; s1="0"; s2="0";} else
        {sum++; s1="0";}

    }
    if(s2!="0") sum+=stoi(s2)-stoi(s1)+1; else sum++;
    cout << sum;
    return 0;
}

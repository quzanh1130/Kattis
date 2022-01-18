
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    int i=0, dem=0;
    while (i<s.size()){
        if (s[i]!='P' && s[i]!='p') dem++; 
        if (s[i+1]!='E' && s[i]!='e') dem++; 
        if (s[i+2]!='R' && s[i]!='r') dem++;
        i+=3; 
    }
    cout << dem;
    return 0;
}
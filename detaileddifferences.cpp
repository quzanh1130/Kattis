#include <bits/stdc++.h>
using namespace std;

string compute(string s1, string s2){
    string s="";
    for (int i=0; i<s1.size(); ++i){
        if (s1[i]==s2[i]) s+='.'; else s+='*';
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    string s1,s2;
    for (int i=0; i<n; ++i){
        cin >> s1 >> s2;
        cout << s1 << endl;
        cout << s2 << endl;
        cout << compute(s1,s2);
        cout << endl << endl;
    }
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int dem=0;
    while (n--){
        string s; cin >> s;
        for (int i=0; i<s.size(); i++) 
            s[i]= tolower(s[i]);
        if ((s.find("pink")>=0 && s.find("pink")<=s.size()) || (s.find("rose")>=0 && s.find("rose")<=s.size()) ) dem++;
    }
    if (dem>0) cout << dem; else cout << "I must watch Star Wars with my daughter";
    return 0;
}

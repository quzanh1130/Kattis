#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    string s; bool check=false;
    for (int i=1; i<=5; i++){
        cin >> s;
        if (s.find("FBI")>=0 && s.find("FBI")<=s.size()) {cout << i << " "; check=true; }
    }
    if (check==false) cout << "HE GOT AWAY!";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

string latso(string s){
    string x;
    int n=s.length();
    for (int i=0; i<n-1;i++){
        x=s[n-1];
        s.insert(i, x);
        s.erase(n,1);
    }
    return s;
}

int main(){
    string a,b;
    cin >> a >> b;
    int x=atoi(latso(a).c_str());
    int y=atoi(latso(b).c_str());
    if (x>y) {
        cout << x;
    } else cout << y;
    return 0;
}

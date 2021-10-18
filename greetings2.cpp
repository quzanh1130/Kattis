#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int dem=0;
    for (int i=1; i<s.length(); i++){
        if (s[i]=='e') {
            dem++;
        } else break;
    }
    for (int i=1; i<=dem; i++){
            s.insert(i,"e");
        }
    cout << s;
    return 0;
}
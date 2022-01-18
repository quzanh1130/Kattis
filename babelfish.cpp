#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    map <string, string> mp;
    while (getline(cin, s) && s != "") {
        string A, B;
        int index = s.find(' ');
        A = s.substr(0, index);
        B = s.substr(index + 1, s.size() - 1);
        mp[B]=A;
    }
    //cout << s << " cc" << endl;
    while (cin >> s){
        if (mp.count(s)){
            cout << mp[s] << endl;
        } else {
            cout << "eh" << endl;
        }
    }
    return 0;
}

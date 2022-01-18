#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, dem=0; scanf("%d",&n); getchar();
    string s;
    map <string,int> mp;
    while (n--){
        getline(cin,s);
        mp[s.substr(0,s.find(" "))]++;
        if (mp[s.substr(0,s.find(" "))]==1) {
            if (dem<12){
                cout << s << '\n';
                dem++;
            }
        }
    }
    return 0;
}

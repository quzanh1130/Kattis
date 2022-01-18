// DAO THIEN HIEU LOI
#include <bits/stdc++.h>;
using namespace std;

int main(){
    map<string,int> mp;
    int n; scanf("%d",&n);
    getchar();
    for (int i=0; i<n; ++i){
        string s;
        getline(cin,s);
        for (int j=0; j<s.size(); ++j){
            s[j]=towlower(s[j]);
            if (s[j]=='-') s[j]=' ';
        }
        mp[s]=1;
    }
    printf("%d\n",mp.size());
return 0;
}

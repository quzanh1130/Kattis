#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m; scanf("%d",&n);
    long int a;
    for (int i=1; i<=n; ++i){
        scanf("%d",&m);
        map <long int,int> mp;
        vector <long int> v;
        cout << "Case #" << i << ": ";
        for (int j=0; j<m; ++j){
            cin >> a;
            v.push_back(a);
            mp[a]++;
        }
        for (int k=0; k<v.size(); k++){
            if (mp[ v[k] ]==1 ) { cout << v[k] << endl;  break; }
        }
    }
    return 0;
}

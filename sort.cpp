#include <bits/stdc++.h>
using namespace std;


int main() {
    map <int,int> mp;
    vector <int> d;
    int n,c,a; scanf("%d %d", &n, &c);
    for (int i=0; i<n; i++){
        scanf("%d",&a);
        if(!mp.count(a)) {
            d.push_back(a);
        }
        mp[a]++;
    }
    for (int i=0; i<d.size()-1; i++){
            if (mp[d[i]]<mp[d[i+1]]){
               for (int j=i+1; j>0; j--){
                if (mp[d[j]]>mp[d[j-1]]){
                    swap(d[j],d[j-1]);
                } else continue;
            }
        }
    }
    for (int i=0; i<d.size(); i++){
        for (int j=0; j<mp[d[i]]; j++){
            printf("%d ",d[i]);
        }
    }

    return 0;
}

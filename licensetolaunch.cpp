#include <bits/stdc++.h>
#define ll long long
using namespace std;

map <string,int> mp;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int mn; cin >> mn;
    int index=0;
    for (int i=1; i<n; i++){
        int tmp; cin >> tmp;
        if (tmp<mn) {
            index=i;
            mn=tmp;
        }
    }
    cout << index;
    return 0;
}

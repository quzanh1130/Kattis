#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long double  pi = 4.0*atanl(1.0);


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int m; cin >> m;
    int limit=0; int index; bool check=false;
    while(m--){
        int time; string ans; cin >> time >> ans;
        limit+=time;
        if (limit>=210 && check==false) {index=n; check=true;} else
        if (ans=="T") n= n == 8 ? 1: n+1;
    }
    cout << index << endl;
    return 0;
}
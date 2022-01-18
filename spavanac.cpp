#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    int h,m; cin >> h >> m;
    if (h>=1 && h<=23){
        if (m<45) cout << h-1 << " " << 60-(45-m); else
            cout << h << " " << m-45;
    } else {
        if (m<45) cout << "23" << " " << 60-(45-m); else
            cout << h << " " << m-45;
    }
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[10];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    for (int i=0; i<4; i++){
        cin >> a[i];
    }
    sort(a, a+4);
    cout << min(a[0],a[1])*min(a[2],a[3]);
    return 0;
}

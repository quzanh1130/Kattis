#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int l,r; cin >> l >> r;
    if (l==0 && r==0){
        cout << "Not a moose"; 
    } else if (l==r){
        cout << "Even " << l+r;
    } else cout << "Odd " << max(l,r)*2;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int k,m,n; 
    cin >> k >> m >> n;
    while (true){
        if (k-m>=0){
            k-=m;
        } else {
            cout << "Barb";
            break;
        }

        if (k-n>=0){
            k-=n;
        } else {
            cout << "Alex";
            break;
        }
    }
    return 0;
}
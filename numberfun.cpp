
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,a,b,c; cin >> n;
    while (n--){
        bool kt=false;
        cin >> a >> b >> c;
        if (a+b == c) kt=true;
            else if (abs(a-b)==c) kt=true;
                else if (a*b==c) kt=true;
                    else if ((float)a/b==c || (float)b/a==c) kt=true;
        if (kt) cout << "Possible" << '\n'; else cout << "Impossible" << '\n';
    }
    return 0;
}
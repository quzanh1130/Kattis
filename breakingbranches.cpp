#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long double  pi   = 4.0*atanl(1.0);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    if (n%2==0){
        cout << "Alice" << endl;
        cout << "1";
    } else cout << "Bob";
    return 0;
}
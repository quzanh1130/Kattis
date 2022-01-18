#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long double  pi   = 4.0*atanl(1.0);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while (true){
        double r; int a,b;
        cin >> r >> a >> b;
        if (r==0 && a==0 && b==0) break;
        cout << fixed << setprecision(10) << pi*r*r << " " << (b*1.0/a)*r*4*r << endl;
    }
    return 0;
}
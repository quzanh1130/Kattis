#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long double  pi   = 4.0*atanl(1.0);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while (true){
        double x1,y1,x2,y2,p; cin >> x1;
        if (x1==0) break;
        cin >> y1 >> x2 >> y2 >> p;
        double x=pow(abs(x1-x2),p);
        double y=pow(abs(y1-y2),p);
        double ans= pow(x+y,1.0/p);
        cout << fixed << setprecision(16) << ans << endl;
    }
    return 0;
}
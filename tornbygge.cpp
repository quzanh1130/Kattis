#include <bits/stdc++.h>
using namespace std;
const long double  pi = 4.0*atanl(1.0);
#define long long ll


int a[100005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    int dem=1;
    for (int i=0; i<n-1; i++){
        if (a[i]<a[i+1]) dem++;
    }
    cout << dem << endl;
    return 0;
}
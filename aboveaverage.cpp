#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[100005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int sum=0;
        for (int i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }
        double average= sum*1.0 / n;
        int dem=0;
        for (int i=0; i<n; i++)
            if (a[i]>average) dem++;
        cout << fixed << setprecision(3) << dem*100.0/n << "%" << endl;
    }
    return 0;
} 
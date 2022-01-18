#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    int n, i;
    while(scanf("%d", &n) == 1 && n) {
        n = (n-1960)/10+2;
        double m = 1<<n;
        for(i = 1; m > 0; i++)
            m -= log10(i)/log10(2);
        cout << i-2 << endl;
    }
    return 0;
}

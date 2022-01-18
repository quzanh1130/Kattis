#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second

const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=105;

vector <int> a;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a1,b1,a2,b2; cin >> a1 >> b1 >> a2 >> b2;
    int sum1 = a1 + a2 + b1 + b2;
    int a3,b3,a4,b4; cin >> a3 >> b3 >> a4 >> b4;
    int sum2 = a3 + b3 + a4 + b4;
    if (sum1 == sum2) cout << "Tie"; else
        if (sum1 > sum2) cout << "Gunnar"; else
            cout << "Emma";
    return 0;
}
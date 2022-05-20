// NGUYEN QUOC ANH
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ff first
#define ss second
#define enld endl
#define endl '\n'
#define pb push_back
#define read(a) scanf("%d", &a)
#define readd(a,b) scanf("%d %d", &a, &b)
#define wri(a) printf("%d ", a)
#define wril(a) printf("%d\n", a)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fort(i, a, b) for(ll i = a; i <= b; ++i)
#define fortt(i, a, b) for (ll i = a; i >= b; --i)

const long double  pi = 4.0*atanl(1.0);
const long long oo = 1000000000000;
const int maxN=65000;

void timer(){
    //clock_t start = clock();
    //....
    //clock_t end = clock();
    //double time_use = (double)(end - start) / CLOCKS_PER_SEC;
    //cout << time_use << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int num1,num2; cin >> num1 >> num2;
    if (num1 == num2) {
        cout << "0" << endl;
    } else if (num1 > num2) {
        int a = (360 - num1) + num2;
        int b = num1 - num2;
        if (a <= b) {
            cout << a << endl;
        } else {
            cout << -1 * b << endl;
        }
    } else {
        int a = num2 - num1;
        int b = (360 - num2) + num1;
        if (a <= b) {
            cout << a << endl;
        } else {
            cout << -1 * b << endl;
        }
    }
    return 0;
}

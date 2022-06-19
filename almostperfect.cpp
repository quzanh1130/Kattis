//NGUYEN QUOC ANH
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
const long long oo = 1000000;
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
    long long n;
    while ( cin >> n) {  
        long long sum = 1;
        for (long long i=2; i*i<=n; i++){
            if (n%i==0) {
                if(i*i!=n)
                    sum = sum + i + n/i;
                else
                    sum=sum+i;
            }
        }
        if (sum == n && n!=1) {
            cout << n << " perfect" << endl;
        } else if (abs(n - sum) >= 0 && abs(n-sum) <= 2 && n!=1) {
            cout << n << " almost perfect" << endl;
        } else {
            cout << n << " not perfect" << endl;
        }
    }
    return 0;
}


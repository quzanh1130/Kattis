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
const int oo = 100000000;
const int maxN=65000;

void timer(){
    //clock_t start = clock(); 
    //....
    //clock_t end = clock();   
    //double time_use = (double)(end - start) / CLOCKS_PER_SEC;
    //cout << time_use << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m; cin >> n >> m;
    int time = 0; int index = 0;
    while (n--){
        int a,b,c; cin >> a >> b >> c;
        time += a - index; 
        index = a;
        int k = 0; bool red_next = false;
        while(true){
            if (red_next == false){
                k+= b;
                if (k > time) {
                    time += k - time;
                    break;
                } 
                if (k == time) break;
            } else {
                k+= c;
                if (k > time) break;
                if (k == time) time += b;
            }
            red_next = !red_next;
        }
    }
    time+= m - index;
    cout << time << endl;
    return 0;
}
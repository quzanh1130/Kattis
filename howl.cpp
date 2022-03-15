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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    int a,w,h,o;
    a = w = h = o = 0;
    for (auto c : s){
        switch(c){
            case 'A':
            a++;
            break;

            case 'W':
            w++;
            break;

            case 'H':
            h++;
            break;

            case 'O':
            o++;
            break;
        }
    }
    if (a == 0 || w == 0 || h ==0 || o==0) {
        a++;
        w++;
        h++;
        o++;
    }
    string ans ="";
    while (a !=0 || w != 0){
        if (a > 0) {ans += 'A'; a--; }
        if (w > 0) {ans += 'W'; w--; }
    }
    while (h !=0 || o != 0){
        if (h > 0) {ans += 'H'; h--; }
        if (o > 0) {ans += 'O'; o--; }
    }

    for (int i = 0;  i < ans.size()-1; i++){
        if (ans[i] == 'W' && ans[i+1] == 'W'){
            ans.insert(i+1,"A");
        }
        if (ans[i] == 'H' && ans[i+1] == 'H'){
            ans.insert(i+1,"O");
        }
    }

    if (ans.size() == s.size()) {
        ans += 'O';
    }
    cout << ans << endl;
    return 0;
} 
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

vector <string> ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    //1
    string tmp = "";
    for(int i = 1; i<= s.size(); i++){
        if (i%3!=0){
            tmp += "..#.";
        } else {
            tmp += "..*.";
        }
    }
    tmp+='.';
    ans.pb(tmp);
    //2
    tmp = "";
    for(int i = 1; i<= s.size(); i++){
        if (i%3!=0){
            tmp += ".#.#";
        } else {
            tmp += ".*.*";
        }
    }
    tmp+='.';
    ans.pb(tmp);
    //3
    tmp = ""; bool ok = false;
    for(int i = 1; i<= s.size(); i++){
        if (i%3!=0){
            if (ok) {tmp += '.'; ok = false;} else tmp+="#.";
            tmp += s[i-1];
            tmp += '.';
        } else {
            tmp += "*.";
            tmp += s[i-1];
            tmp += ".*";
            ok = true;
        }
    }
    if (s.size()%3!=0) tmp +='#';
    ans.pb(tmp);
    //4
    tmp = "";
    for(int i = 1; i<= s.size(); i++){
        if (i%3!=0){
            tmp += ".#.#";
        } else {
            tmp += ".*.*";
        }
    }
    tmp+='.';
    ans.pb(tmp);
    //5
    tmp = "";
    for(int i = 1; i<= s.size(); i++){
        if (i%3!=0){
            tmp += "..#.";
        } else {
            tmp += "..*.";
        }
    }
    tmp+='.';
    ans.pb(tmp);
    // print
    for(auto x:ans) cout << x << endl;
    return 0;
}
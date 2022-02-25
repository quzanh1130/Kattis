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

map<char,char> t{
    {'a','2'},{'b','2'},{'c','2'},{'d','3'},{'e','3'},{'f','3'},
    {'g','4'},{'h','4'},{'i','4'},{'j','5'},{'k','5'},{'l','5'},
    {'m','6'},{'n','6'},{'o','6'},{'p','7'},{'q','7'},{'r','7'}, {'s','7'},
    {'t','8'},{'u','8'},{'v','8'},{'w','9'},{'x','9'},{'y','9'},{'z','9'}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n; cin.ignore();
    vector<string> s;
    fort(i,1,n){
        string tmp; cin >> tmp;
        s.pb(tmp);
    }
    string str; cin >> str;
    set <char> sett;
    for(auto x : str){
        if (sett.find(x) != sett.end()){
            continue;
        } else {
            sett.insert(x);
        }
    }
    
    int count = 0;
    for(auto x : s){
        bool ok = true;
        if (x.size() != str.size()) continue;
            for(int i = 0; i<x.size(); i++){
                if (sett.find(t[x[i]])!=sett.end()) continue; 
                else { ok = false; break;}
            }
        if (ok) count++;
    }
    cout << count << endl;
    return 0;
}
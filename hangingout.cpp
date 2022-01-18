#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second

const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=200005;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int l,x; cin >> l >> x;
    int dem=0; int tmp=0;
    while (x--){
        string s1; int s2; cin >> s1 >> s2;
        if (s1=="enter") 
            if (tmp + (s2) <=l) tmp+=(s2); else dem++;
        else tmp -= (s2); 
    }
    cout << dem << endl;
    return 0;
}
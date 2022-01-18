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

set<string> st;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while(n--){
        string s1,s2; cin >> s1 >> s2;
        if (s1=="entry"){
            if (st.find(s2) != st.end()){
                cout << s2 << " entered (ANOMALY)" << endl;
            } else {
                st.insert(s2);
                cout << s2 << " entered" << endl;
            }
        } else {
            if (st.find(s2) != st.end()){
                st.erase(s2);
                cout << s2 << " exited" << endl;
            } else {
                cout << s2 << " exited (ANOMALY)" << endl;
            }
        }
    }
    return 0;
}
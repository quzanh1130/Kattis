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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fort(i, a, b) for(ll i = a; i <= b; ++i)
#define fortt(i, a, b) for (ll i = a; i >= b; --i)

const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=100000;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s1,s2; cin >> s1 >> s2;
    
    reverse(all(s1));
    reverse(all(s2));

    while(s1.size() > s2.size()) {
        s2.push_back('0');
    }
    while(s2.size() > s1.size()) {
        s1.push_back('0');
    }

    reverse(all(s1));
    reverse(all(s2));

    string ans1 = "";
    string ans2 = "";

    fort(i,0,s1.size()-1){
        if (s1[i]==s2[i]) {
            ans1+=s1[i];
            ans2+=s2[i];
        } else if (s1[i] >s2[i]){
            ans1+=s1[i];
        } else {
            ans2+=s2[i];
        }
    }

    if (ans1.size()==0){
        cout << "YODA" << endl;
    } else {
        cout << stoll(ans1) << endl;
    }
    if (ans2.size()==0){
        cout << "YODA" << endl;
    } else {
        cout << stoll(ans2) << endl;
    }
    return 0;
}
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
const int oo = 100000000;
const int maxN=2000000;

map <string, string> mp {
    {"A#","Bb"},{"Bb","A#"},{"C#","Db"},{"Db","C#"},
    {"D#","Eb"},{"Eb","D#"},{"F#","Gb"},{"Gb","F#"},{"G#","Ab"},{"Ab","G#"}
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s1,s2; int i=1;
    string ans ="";
    while (cin >> s1){
        cin >> s2;
        if (s1.size()==1){
            ans ="UNIQUE";
        } else {
            ans = mp[s1] + " " + s2;
        }
        cout << "Case " << i << ": " << ans << endl;
        i++;
    }
    return 0;
}
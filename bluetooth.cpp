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

vector <int> r1,r2,l1,l2;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    bool left = true, right = true;
    while (n--){
        string s; char c; 
        cin >> s >> c;
        if (s[0]=='-' || s[0]=='+'){ // ham trai
            if (s[0]=='-' && c=='m'){
                l1.push_back(s[1]-'0');
            } else if (s[0]=='+' && c=='m') {
                l2.push_back(s[1]-'0');
            } else {
                left = false;
            }
        } else { // ham phai
            if (s[1]=='-' && c=='m'){
                r1.push_back(s[0]-'0');
            } else if (s[1]=='+' && c=='m') {
                r2.push_back(s[0]-'0');
            } else {
                right = false;
            }
        }
    }

    if (l1.size()==8 || l2.size()==8) left = false;
    if (r1.size()==8 || r2.size()==8) right = false;

    if (left == false && right == false){
        cout << "2" << endl;
    } else if (left==false){
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}
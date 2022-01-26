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

vector <int> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; 
    while (getline(cin,s)){
        double average = 0;
        vector <string> v;
        string tmp; int x,y; bool k = false; int count = 0; bool t=false;
        for (int i=0; i<s.size() -1 ; i++){
            if (s[i] >='A' && s[i] <= 'Z'){
                x=i;
                k = false;
            } else if (s[i]==' ') {
                y=i-1;
                tmp = s.substr(x,y-x+1);
                if (k==false) v.push_back(tmp); else {average+= stod(tmp); count++; t= false;}
                x = 0 ;
                y = 0;
            } else if (s[i]>='0' && s[i] <='9' && t == false){
                x=i;
                t=true;
                k = true;
            }
        }
        if (k==true){
            tmp = s.substr(x, s.size()-x);
            average+= stod(tmp); count++;
        } else {
            tmp = s.substr(x, s.size()-x);
            v.push_back(tmp);
        }
            cout << fixed << setprecision(6) << average / count;
            for(auto x : v) cout << " " << x;
            cout << endl;
    }
    return 0;
}
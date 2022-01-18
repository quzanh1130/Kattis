// NGUYEN QUOC ANH
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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; getline(cin,s);
    string tmp=""; int dem=0; int k=0;
    for(auto x:s){
        if(x!=' '){
            tmp+=x;
        } else {
            if (tmp.find("ae")>=0 && tmp.find("ae")<=tmp.size()) k++;
            dem++;
            tmp="";
        }
    }
    if (tmp.find("ae")>=0 && tmp.find("ae")<=tmp.size()) k++;
    dem++;
    if (k*1.0/dem >= 0.4) cout << "dae ae ju traeligt va" << endl; else cout << "haer talar vi rikssvenska" << endl;
    return 0;
}
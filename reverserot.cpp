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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; 
    while (cin >> n && n!=0){
        string s; cin >> s;
        fort(i,1,n){
            fortt(j,s.size()-1,0){
                if (s[j]>='A' && s[j]<'Z'){
                    s[j]=s[j]+1;
                } else if (s[j]=='Z'){
                    s[j]='_';
                } else if (s[j]=='_'){
                    s[j]='.';
                } else s[j]='A';
            }
        }
        fortt(i,s.size()-1,0) cout << s[i];
        cout << endl;
    }
    return 0;
}
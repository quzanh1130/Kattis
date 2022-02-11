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
vector <string> s,ans;

bool check(string t1, string t2, string t3){
    int same = 0, diff = 0;
    fort(i,0,3){
        if (t1[i]==t2[i] && t2[i]==t3[i] && t3[i]==t1[i]) same++;
        if (t1[i]!=t2[i] && t2[i]!=t3[i] && t3[i]!=t1[i]) diff++;
    }
    return (diff + same == 4);
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    fort(i,1,12){   
        string tmp; cin >> tmp; 
        s.pb(tmp);
    }
    fort(i,0,9){
        fort(j,i+1,10){
            fort(k,j+1,11){
                if (check(s[i],s[j],s[k])){
                    ans.pb(to_string(i+1) + ' ' + to_string(j+1) + ' ' + to_string(k+1));
                }
            }
        }
    }
    if (ans.size()==0) {
        cout << "no sets" << endl;
    } else {
        for(auto x:ans){
            cout << x << endl;
        }
    }
    return 0;
}
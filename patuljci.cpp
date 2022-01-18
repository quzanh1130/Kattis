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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector <int> a;
    int sum=0;
    fort(i,0,8){
        int tmp; cin >> tmp;
        sum += tmp;
        a.push_back(tmp);
    }
    fort(i,0,8){
        fort(j,0,8){
            if (i!=j && a[i] != a[j] && sum-a[i]-a[j]==100){
                for(auto x : a){
                    if (x!= a[i] && x!=a[j]){
                        cout << x << endl;
                    
                    }
                }
                return 0;
            } 
        }
    }
}
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
const int maxN=200005;

char s[10];
int n;
vector <string> v;

int timI(){
    for (int i=n-2; i>=0; i--){
        if (s[i]<s[i+1]) {
            return i;
        } 
    }
    return -1;
}
int timJ(int i){
    for (int j=n-1; j>i; j--){
        if (s[i]<s[j]){
            return j;
        }
    }
    return i+1;
}

void daoxau(int x){
    int left=x+1;
    int right=n-1;
    while (left < right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
}

int solve(){
    int i=timI();
    if (i>=0){
        int j=timJ(i);
        swap(s[i],s[j]);
        daoxau(i);
        return 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string k; cin >> k;
    for(int i=0; i<k.size(); i++) s[i] = k[i];
    n = strlen(s);

    while (solve()){
        v.push_back(s);       
    }

    if (v.size()==0) cout << "0" << endl; else cout << v[0] << endl;
    return 0;
}
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
const int oo = 100000005;
const int maxN=200005;

vector <pair<int,int>> errors,correct;
vector<int> v;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m; cin >> n >> m;
    fort(i,1,m){
        int a; cin >> a; 
        v.pb(a);
    }
    v.pb(maxN);
    cout << "Errors: ";
    int x = v[0];
    fort(i,0,m-1){
        if (v[i]+1 != v[i+1]){
            if (v[i] != x)
                errors.pb({x,v[i]});
            else 
                errors.pb({x,x});
            x = v[i+1];
        }
    }
    int k = errors.size();
    fort(i,0,errors.size()-3){
        if (errors[i].ff != errors[i].ss){
            cout << errors[i].ff << "-" << errors[i].ss << ", ";
        } else {
            cout << errors[i].ff << ", ";
        }
    }
    if (errors[k-2].ff != errors[k-2].ss){
            cout << errors[k-2].ff << "-" << errors[k-2].ss << " and ";
        } else {
            cout << errors[k-2].ff << " and ";
        }
    if (errors[k-1].ff != errors[k-1].ss){
            cout << errors[k-1].ff << "-" << errors[k-1].ss;
        } else {
            cout << errors[k-1].ff;
        }
    cout << endl;

    cout << "Correct: ";
    int y = 1;
    fort(i,0,m-1){
        if (v[i]-y>0){
            correct.pb({y,v[i]-1});
            y = v[i]+1;
        } else {
            y= v[i]+1;
        }
    }
    if (v[m-1] != n) correct.pb({v[m-1]+1,n});
    k = correct.size();
    fort(i,0,correct.size()-3){
        if (correct[i].ff != correct[i].ss){
            cout << correct[i].ff << "-" << correct[i].ss << ", ";
        } else {
            cout << correct[i].ff << ", ";
        }
    }
    if (correct[k-2].ff != correct[k-2].ss){
            cout << correct[k-2].ff << "-" << correct[k-2].ss << " and ";
        } else {
            cout << correct[k-2].ff << " and ";
        }
    if (correct[k-1].ff != correct[k-1].ss){
            cout << correct[k-1].ff << "-" << correct[k-1].ss;
        } else {
            cout << correct[k-1].ff;
        }
    return 0;
}
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

int a[10];

bool check(){
    fort(i,0,3)
        if (a[i]+1!=a[i+1]) return false;
    return true; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    fort(i,0,4) cin >> a[i];
    int x=0;
    while (true){
        if (a[x]>a[x+1]){
            swap(a[x],a[x+1]);
            fort(i,0,4) cout << a[i] << " "; cout << endl;
            if (check()==true) break;
        }   
        if (x==3) x=0; else x++;
    }
    return 0;
}
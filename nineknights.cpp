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

char c[10][10];

bool check(int i, int j){
    if ((i-1) >=0 && j-2 >=0 ){
        char p1 = c[i-1][j-2];
        if (p1 == 'k') return false;
    }
    if ((i-2) >=0 && j-1 >=0 ){
        char p2 = c[i-2][j-1];
        if (p2 == 'k') return false;
    }    
    if ((i-2) >=0 && j+1 <=4 ){
        char p3 = c[i-2][j+1];
        if (p3 == 'k') return false;
    }    
    if ((i-1) >=0 && j+2 <=4 ){
        char p4 = c[i-1][j+2];
        if (p4 == 'k') return false;
    }    
    if ((i+1) <=4 && j+2 <=4 ){
        char p5 = c[i+1][j+2];
        if (p5 == 'k') return false;
    }    
    if ((i+2) <=4 && j+1 <=4 ){
        char p6 = c[i+2][j+1];
        if (p6 == 'k') return false;
    }    
    if ((i+2) <=4 && j-1 >=0 ){
        char p7 = c[i+2][j-1];
        if (p7 == 'k') return false;
    }    
    if ((i+1) <=4 && j-2 >=0 ){
        char p8 = c[i+1][j-2];
        if (p8 == 'k') return false;
    } 
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    fort(i,0,4){
        fort(j,0,4){
            cin >> c[i][j];
        }
    }
    int count = 0;
    fort(i,0,4){
        fort(j,0,4){
            if (c[i][j]=='k'){
                count ++;
                if (check(i,j)==false){
                    cout <<"invalid" << endl;
                    return 0;
                }
            }
        }
    }
    if (count != 9) cout << "invalid" << endl; else cout << "valid" << endl;
    return 0;
}
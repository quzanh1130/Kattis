#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long double  pi = 4.0*atanl(1.0);

int a[5][5];

pair<int,int> find( int k){
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            if (a[i][j]==k) return {i,j};
    return {0,0};
}

double distance(pair<int,int> x, pair <int,int> y){
    double d=0;
    d+= pow(x.first-y.first,2) + pow(x.second-y.second,2);
    d=sqrt(d);
    return d;
}

double solve(){
    double kc=0;
    for (int i=1; i<=8; i++)
        kc+= distance(find(i),find(i+1));
    return kc;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++){
            cin >> a[i][j];
        }
    cout << fixed << setprecision(10) <<solve(); 
    return 0;
}
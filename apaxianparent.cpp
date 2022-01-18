#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string y,p; cin >> y >> p;
    string ans;
    if (y[y.size()-1]=='x' && y[y.size()-2]=='e'){
        ans= y+p;
    } else if (y[y.size()-1]=='e'){
        ans= y+'x'+p;
    } else if (y[y.size()-1]=='a' || y[y.size()-1]=='i' || y[y.size()-1]=='o' || y[y.size()-1]=='u'){
        y[y.size()-1] ='e';
        ans= y+'x'+p;
    } else ans=y+"ex"+p;
    cout << ans;
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    
    while (true){
        int cases; cin >> cases;
        if (cases==0) break;
        vector <int> wide,len;
        int m,n=0; m=cases;
        while (true){
            int a,b; cin >> a >> b; 
            if (a==-1 && b==-1) break;
            if (a<=m) { m-=a; wide.push_back(b); } else {
                int mx=0; for (auto x:wide) mx=max(mx,x); 
                n+=mx;
                len.push_back(cases-m);
                wide.clear(); m=cases-a; wide.push_back(b);
            }  
        }
        len.push_back(cases-m);
        int mx=0; for (auto x:wide) mx=max(mx,x); n+=mx;
        m=0;
        for (auto x:len) m=max(m,x); 
        cout << m << " x " << n << endl;
    }
    return 0;
}

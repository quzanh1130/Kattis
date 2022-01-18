
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    if (s.size()<=7){
        int n=stoi(s);
        if (n==1) { cout << n; return 0;}
        int diva=0;
        while (n>1){
            diva++;
            n/=diva;   
        }
        cout << diva ;
    }else{
        int i=1;
        double ans=1;
        while (true){
            ans+=log10(i);
            if (floor(ans)==s.size()){
                cout << i ;
                break;
            }
            i++;
        }
    }
    return 0;
}
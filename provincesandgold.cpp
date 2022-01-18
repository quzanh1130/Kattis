#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int g,s,c; cin >> g >> s >> c;
    int cost=g*3+s*2+c;
    if (cost>=8) cout << "Province or "; else
        if (cost>=5) cout << "Duchy or "; else
            if (cost>=2) cout << "Estate or ";
    if (cost>=6) cout << "Gold"; else
        if (cost>=3) cout << "Silver"; else
            cout << "Copper";
    return 0;
}

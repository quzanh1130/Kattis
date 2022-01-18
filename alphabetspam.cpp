#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[10];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    string s; cin >> s; 
    double a=0.0;
    double b=0.0;
    double c=0.0; 
    double d=0.0;
    int len=s.size();
    for (int i=0; i<len; i++){
        if (s[i]=='_') a++; else 
            if (s[i]>='a' && s[i]<='z') b++; else
                if (s[i]>='A' && s[i]<='Z') c++; else d++;
    }
    cout << fixed << setprecision(16) <<a/len << endl;
    cout << b/len << endl;
    cout << c/len << endl;
    cout << d/len;
    return 0;
}

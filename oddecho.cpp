#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s[10];
    scanf("%d ",&n);
    for (int i=0; i<n; i++){
        cin >> s[i];
    }
    for (int i=0; i<n; i++){
        if (i % 2 ==0) {
            cout << s[i] << endl;
        }
    }
    return 0;
}
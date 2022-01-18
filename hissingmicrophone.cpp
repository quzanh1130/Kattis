#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for (int i=0; i<s.size()-1; ++i){
       if (s[i]=='s' && s[i+1]=='s'){
            printf("hiss");
            return 0;
       }
    }

    printf("no hiss");
    return 0;
}

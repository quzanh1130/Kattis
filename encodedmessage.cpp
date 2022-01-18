#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; scanf("%d",&n); getchar();
    string s;
    for (int i=0; i<n; ++i){
        cin >> s;
        for (int j=sqrt(s.size()); j>=1; --j ){
            for (int k=1; k<=sqrt(s.size()); ++k){
                if (k==1) cout << s[j-1]; else
                cout << s[ j+sqrt(s.size())*(k-1)-1];
            }
        }
        printf("\n");
    }
    return 0;
}

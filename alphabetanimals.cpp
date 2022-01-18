#include <bits/stdc++.h>
using namespace std;

bool ktra(string s[], string t,int n ,int x){
    string k;
    for (int i=0; i<n; i++){
        if (i==x) continue;
        k=s[i];
        if ( k[0]==t[t.size()-1] ){
            return false;
        }
    }
    return true;
}

int main()
{
   string str,t,best,bestt;
   cin >> str;
   int n;
   scanf("%d",&n); getchar();
   string s[n];
   for (int i=0; i<n; i++){
        cin >> s[i];
   }
   best=""; bestt=""; int test1=1, test2=1;
   for (int i=0; i<n; i++){
        t=s[i];
        if (t[0]==str[str.size()-1]){
            if (ktra(s,t,n,i) && test1==1){
                    best=s[i];
                    test1=0;
                }   else if (test2==1){
                            bestt=s[i];
                            test2=0;
                            }
        }
        if (best!="") {cout << best << "!"; return 0; }
    }
    if (bestt!="") {cout << bestt; return 0; }
    printf("?");
    return 0;
}

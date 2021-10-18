#include <bits/stdc++.h>
using namespace std;

bool xet(string str,int x){
    if (str[x]>='0' && str[x]<='9') return true;
    return false;
}

bool xetso1(string s, string p){
    if (s==p) {
        return true;
    } else return false;
}

bool xetso2(string s, string p){ // 123 123a
    string t=s;
    if (!xet(t,0)) return false;
    t.erase(0,1);
    if (t==p) return true;
    return false;
}

bool xetso3(string s, string p){
    string t=s;
    if (!xet(t,t.length()-1)) return false;
    t.erase(t.length()-1,1);
    if (t==p) return true;
    return false;
}

bool xetso4(string s, string p){
    string t=s;
    for (int i=0; i<t.length(); i++){
        if (t[i]>='a' && t[i]<='z'){
            t[i]-=32;
        } else {
            if (t[i]>='A' && t[i]<='Z'){
            t[i]+=32;
            }
        }
    }
    if (t==p) return true;
    return false;
}

int main(){
    string s,p;
    cin >> s >> p;
    if (xetso1(s,p)) {
        printf("Yes");
        return 0;
    }
    if (xetso2(s,p)) {
        printf("Yes");
        return 0;
    }
    if (xetso3(s,p)) {
        printf("Yes");
        return 0;
    }
    if (xetso4(s,p)) {
        printf("Yes");
        return 0;
    }
    printf("No");
    return 0;
}

 rss fee
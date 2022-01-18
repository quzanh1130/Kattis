#include <bits/stdc++.h>
using namespace std;

int* pre_pie(string pattern, int m){
    int k=0;
    int* pie= new int[m];
    pie[0]=0;
    for (int i=1; i<m; ++i){
        while (k>0 && pattern[k] != pattern[i]){
            k=pie[k-1];
        }
        if (pattern[i]==pattern[k]){
            k++;
        }
        pie[i]=k;
    }
    return pie;
}

void kmp(string text, string pattern){
    int n = text.size();
    int m = pattern.size();
    int* pie=pre_pie(pattern,m);
    int match=0; bool kt=true;
    for (int i=0; i<n; ++i){
        while (match > 0 && text[i]!=pattern[match]){
            match=pie[match-1];
        }
        if (text[i]==pattern[match]){
            match++;
        }
        if (match == m){
            cout << i - match+1  << " ";
            kt=false;
        }
    }
    cout << endl;
    if (kt) cout << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string text,pattern;
    while (getline(cin,pattern)) {
        getline(cin,text);
        kmp(text,pattern);
    }
    return 0;
}
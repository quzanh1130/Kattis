
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    map <int, int> mp1;
    map <int, int> mp2;
    vector <int> a1;
    vector <int> b2;
    for (int i=0; i<3; ++i){
        int a,b;
        cin >> a >> b;
        if (mp1.count(a)==0){
            a1.push_back(a);
        }
        if (mp2.count(b)==0){
            b2.push_back(b);
        }
        mp1[a]++; mp2[b]++;
    }
    for (int i=0; i<3; ++i){
        if (mp1[a1[i]]!=2) { cout << a1[i] << " "; break; }
    } 
    for (int i=0; i<3; ++i){
        if (mp2[b2[i]]!=2) { cout << b2[i] << " "; break; }     
    }
    return 0;
}
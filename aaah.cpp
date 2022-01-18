#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    map <char,int> mp1;
    for (auto x:s1){
        mp1[x]++;
    }
    map <char,int> mp2;
    for (auto x:s2){
        mp2[x]++;
    }
    if (mp2['a']<= mp1['a']) printf("go"); else printf("no");
    return 0;
}
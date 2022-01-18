#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fort(i, a, b) for(int i = a; i <= b; ++i)
#define fortt(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second

const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=105;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s1,s2; cin >> s1 >> s2;
    fort(i,0,s1.size()-1){
        int index = i % s2.size();
        int tmp = (s1[i] - 'A') - (s2[index]-'A'); 
        if (tmp > 26 ) tmp-=26;
        if (tmp < 0 ) tmp += 26;
        s1[i] = tmp + 'A';
        s2[index] = s1[i];
    }
    cout << s1 << endl;
    return 0;
}
// NGUYEN QUOC ANH
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ff first
#define ss second
#define enld endl
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fort(i, a, b) for(ll i = a; i <= b; ++i)
#define fortt(i, a, b) for (ll i = a; i >= b; --i)

const long double  pi = 4.0*atanl(1.0);
const int oo = 1000000000;
const int maxN=100000;

map <string,int> a {
    {"xxxxxx...xx...xx...xx...xx...xxxxxx",0},{"....x....x....x....x....x....x....x",1},
    {"xxxxx....x....xxxxxxx....x....xxxxx",2},{"xxxxx....x....xxxxxx....x....xxxxxx",3},
    {"x...xx...xx...xxxxxx....x....x....x",4},{"xxxxxx....x....xxxxx....x....xxxxxx",5},
    {"xxxxxx....x....xxxxxx...xx...xxxxxx",6},{"xxxxx....x....x....x....x....x....x",7},
    {"xxxxxx...xx...xxxxxxx...xx...xxxxxx",8},{"xxxxxx...xx...xxxxxx....x....xxxxxx",9},
    {".......x....x..xxxxx..x....x.......",-1}
};

map <int,string> b {
    {0,"xxxxxx...xx...xx...xx...xx...xxxxxx"},{1,"....x....x....x....x....x....x....x"},
    {2,"xxxxx....x....xxxxxxx....x....xxxxx"},{3,"xxxxx....x....xxxxxx....x....xxxxxx"},
    {4,"x...xx...xx...xxxxxx....x....x....x"},{5,"xxxxxx....x....xxxxx....x....xxxxxx"},
    {6,"xxxxxx....x....xxxxxx...xx...xxxxxx"},{7,"xxxxx....x....x....x....x....x....x"},
    {8,"xxxxxx...xx...xxxxxxx...xx...xxxxxx"},{9,"xxxxxx...xx...xxxxxx....x....xxxxxx"},
    {-1,".......x....x..xxxxx..x....x......."}
};




int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    int n = round(s.size()*1.0/6);
    vector <string> v (n+1,"");
    int  j = 1;   
    for(int i =0; i<s.size(); i+=6){
        string tmp = s.substr(i,5);
        v[j] +=tmp;
        j++;
    }
    fort(k,1,6){
        cin >> s; int j = 1;
        for(int i =0; i<s.size(); i+=6){
            string tmp = s.substr(i,5);
            v[j] +=tmp;
            j++;
        }
    }
    
    string s1="",s2=""; bool check = true;
    fort(i,1,n){
        if (a[v[i]]!=-1 && check==true){
                s1+=(a[v[i]]+'0');
        } else if (a[v[i]]!=-1 && check==false){
                s2+=(a[v[i]] +'0');
        } else check = false;
    }
    int tmp = stoi(s1) + stoi(s2);
    string ans = to_string(tmp);
    vector <string> result1;
    fort(i,0,ans.size()-1){
        string tmp = b[ans[i]-'0'];
        result1.push_back(tmp);
    }
    int k = 0;
    vector <string> result2 (7,"");
    fort(i,0,6){
        fort(j,0,result1.size()-1){
            string tmp = result1[j].substr(k,5);
            result2[i]+=tmp ;
            if (j!=result1.size()-1) result2[i]+="."; 
        }
        k+=5;
    }
    for(auto x : result2){
        cout << x << endl;
    }
    return 0;
}
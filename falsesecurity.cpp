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
const int oo = 100000000;
const int maxN=200005;

vector <int> w;

map <string,char> a {
    {".-",'A'}, {"-...",'B'}, {"-.-.",'C'},{"-..",'D'}, {".",'E'}, {"..-.",'F'}, 
    {"--.",'G'}, {"....",'H'}, {"..",'I'}, {".---",'J'}, {"-.-",'K'}, {".-..",'L'}, {"--",'M'}, 
    {"-.",'N'}, {"---",'O'}, {".--.",'P'}, {"--.-",'Q'}, {".-.",'R'}, {"...",'S'}, {"-",'T'}, {"..-",'U'},
    {"...-",'V'}, {".--",'W'}, {"-..-",'X'}, {"-.--",'Y'}, {"--..",'Z'}, {"..--",'_'}, {"---.",'.'}, 
    {".-.-",','},{"----",'?'}
};

map <char, string> b{
    {'A',".-"}, {'B',"-..."}, {'C',"-.-."},{'D',"-.."}, {'E',"."}, {'F',"..-."}, 
    {'G',"--."}, {'H',"...."}, {'I',".."}, {'J',".---"}, {'K',"-.-"}, {'L',".-.."}, {'M',"--"}, 
    {'N',"-."}, {'O',"---"}, {'P',".--."}, {'Q',"--.-"}, {'R',".-."}, {'S',"..."}, {'T',"-"}, {'U',"..-"},
    {'V',"...-"}, {'W',".--"}, {'X',"-..-"}, {'Y',"-.--"}, {'Z',"--.."}, {'_',"..--"}, {'.',"---."}, 
    {',',".-.-"},{'?',"----"}
};

string sol1(string s){
    string ans="";
    for(auto x : s){
        string tmp = b[x];
        w.push_back(tmp.size());
        ans += tmp;
    }
    return ans;
}

void sol2(string s){
    string ans = ""; int j=0;
    for(int i=w.size()-1; i>=0; i--){
        char c = a[s.substr(j,w[i])];
        ans += c;
        j+=w[i];
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    while(cin >> s){
        string tmp = sol1(s);
        sol2(tmp);
        w.clear();
    }
    return 0;
}
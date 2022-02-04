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

map <string,int> month{
    {"Jan",1},{"Feb",2},{"Mar",3},{"Apr",4},{"May",5},{"Jun",6},
    {"Jul",7},{"Aug",8},{"Sep",9},{"Oct",10},{"Nov",11},{"Dec",12}
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    while(n--){
        int d; string m;
        cin >> d >> m;
        int mon = month[m];
        if ((mon==3 && d>=21 && d<=31) || (mon==4 && d>=1 && d<=20) ){
            cout << "Aries" << endl;
        } else if ((mon==4 && d>=21 && d<=31) || (mon==5 && d>=1 && d<=20) ){
            cout << "Taurus" << endl;
        } else if ((mon==5 && d>=21 && d<=31) || (mon==6 && d>=1 && d<=21) ){
            cout << "Gemini" << endl;
        } else if ((mon==6 && d>=22 && d<=31) || (mon==7 && d>=1 && d<=22) ){
            cout << "Cancer" << endl;
        } else if ((mon==7 && d>=23 && d<=31) || (mon==8 && d>=1 && d<=22) ){
            cout << "Leo" << endl;
        } else if ((mon==8 && d>=23 && d<=31) || (mon==9 && d>=1 && d<=21) ){
            cout << "Virgo" << endl;
        } else if ((mon==9 && d>=22 && d<=31) || (mon==10 && d>=1 && d<=22) ){
            cout << "Libra" << endl;
        } else if ((mon==10 && d>=23 && d<=31) || (mon==11 && d>=1 && d<=22) ){
            cout << "Scorpio" << endl;
        } else if ((mon==11 && d>=23 && d<=31) || (mon==12 && d>=1 && d<=21) ){
            cout << "Sagittarius" << endl;
        } else if ((mon==12 && d>=22 && d<=31) || (mon==1 && d>=1 && d<=20) ){
            cout << "Capricorn" << endl;
        } else if ((mon==1 && d>=21 && d<=31) || (mon==2 && d>=1 && d<=19) ){
            cout << "Aquarius" << endl; 
        } else cout << "Pisces" << endl;

    }
    return 0;
}
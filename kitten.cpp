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
const int maxN=2000000;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
     vector<int> nextStep;
    nextStep.resize(100, -1);

    int kitten;
    cin >> kitten;

    int n;
    cin.ignore();

    while(cin >> n && n != -1) {
        string s;
        getline(cin, s);

        stringstream line(s);

        int temp;
        while(line >> temp) {
            nextStep[temp] = n;
        }
    }

    while(kitten != -1) {
        cout << kitten << " ";
        kitten = nextStep[kitten];
    }
    cout << endl;
    return 0;
}
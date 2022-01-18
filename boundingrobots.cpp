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
    while (true){
        int n,m; cin >> n >> m;
        if (n==0 && m==0) break;
        int i=0, j=0;
        int ir=0, jr=0;
        int k; cin >> k;
        fort(o,1,k){
            char c; int z; cin >> c >> z;
            switch (c){
                case 'u':
                j+=z; jr+=z;
                if(j>m-1) j=m-1;
                break;

                case 'd':
                j-=z; jr-=z;
                if ( j<0) j=0;
                break;

                case 'r':
                i+=z; ir+=z;
                if (i>n-1) i=n-1;
                break;

                case 'l':
                i-=z; ir-=z;
                if (i <0) i=0;
                break;
            }
        }
        cout << "Robot thinks " << ir << " " << jr << endl;
        cout << "Actually at " << i << " " << j << endl;
        cout << endl;
    }
    return 0;
}
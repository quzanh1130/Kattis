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
    int x,y,z; cin >> x >> y >> z;
    if (x + y == z)
        cout << x << "+" << y << "="<< z << endl;
    else if (x == y +z) 
        cout << x << "=" << y << "+"<< z << endl;
    else if (x - y == z)
        cout << x << "-" << y << "="<< z << endl;
    else if (x == y - z)
        cout << x << "=" << y << "-"<< z << endl;
    else if (x * y == z)
        cout << x << "*" << y << "="<< z << endl;
    else if (x == y * z)
        cout << x << "=" << y << "*"<< z << endl;
    else if (x / y == z)
        cout << x << "/" << y << "="<< z << endl;
    else cout << x << "=" << y << "/"<< z << endl; 
    return 0;
}
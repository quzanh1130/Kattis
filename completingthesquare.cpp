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

struct Point{
    double x;
    double y;
};

double kc(Point point1, Point point2){
    double ans = pow(point1.x-point2.x,2) + pow(point1.y-point2.y,2);
    return sqrt(ans);
}

Point td(Point point1, Point point2){
    double xx = (point1.x + point2.x)/2;
    double yy = (point1.y + point2.y)/2;
    Point ans;
    ans.x = xx; 
    ans.y = yy;
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    Point point1,point2,point3;
    cin >> point1.x >>point1.y;
    cin >> point2.x >>point2.y;
    cin >> point3.x >>point3.y;
    if (kc(point1,point2) >= kc(point1,point3) && kc(point1,point2)>=kc(point2,point3)){ // 1 2
        Point i = td(point1,point2);
        int x = 2*i.x - point3.x;
        int y = 2*i.y - point3.y;
        cout << x << " " << y << endl;
    } else if (kc(point1,point3)>=kc(point1,point2) && kc(point1,point3)>=kc(point2,point3)){ // 1 3
        Point i = td(point1,point3);
        int x = 2*i.x - point2.x;
        int y = 2*i.y - point2.y;
        cout << x << " " << y << endl;
    } else { // 2 3
        Point i = td(point2,point3);
        int x = 2*i.x - point1.x;
        int y = 2*i.y - point1.y;
        cout << x << " "<< y << endl;
    }
    return 0;
}
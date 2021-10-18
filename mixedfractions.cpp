#include <iostream>

using namespace std;

int main()
{
    int x,y;
    x=1; y=1;
    do {
        cin >> x >> y;
        if (x ==0 || y == 0) break;
        cout << x/y << " " << x % y << " / " << y << endl;
    } while ( x >0 && y >0);
    return 0;
}

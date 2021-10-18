#include <iostream>

using namespace std;

int main()
{
    int a[6];
    for (int i=0; i<6; i++){
        cin >> a[i];
    }
    if (a[0]==1) cout << "0 "; else cout << 1-a[0] << " ";
    if (a[1]==1) cout << " 0 "; else cout << " " << 1-a[1] << " ";
    if (a[2]==2) cout << " 0 "; else cout << " " << 2-a[2] << " ";
    if (a[3]==2) cout << " 0 "; else cout << " " <<2-a[3]<< " ";
    if (a[4]==2) cout << " 0 "; else cout << " " <<2-a[4] << " ";
    if (a[5]==8) cout << " 0"; else cout << " "<< 8-a[5];
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if (n>=m) {
        for (int i=m+1; i<=n+1; i++){
            cout << i << endl;
        }
    } else {
        for (int i=n+1; i<=m+1;i++){
            cout << i << endl;
        }
    }
    return 0;
}

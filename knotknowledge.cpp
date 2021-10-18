#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n-1; i++){
        cin >> b[i];
    }
    for (int i=0; i<n; i++){
            int dem=0;
        for (int j=0; j<n-1;j++){
            if (a[i]==b[j]){
                a[i]=0;
                dem++;
            }
        }
        if (dem ==0) {
            cout << a[i];
            break;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[5005], b[5005], sx[5005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    while (true){
        cin >> n;
        if (n==0) break;
        for (int i=0; i<n; i++){
            cin >> a[i];
            sx[i]=a[i];
        }
        for (int i=0; i<n; i++){
            cin >> b[i];
        }
        sort(sx, sx+n);
        sort(b,b+n);
        for (int i=0; i<n; i++){
           for (int j=0; j<n; j++){
               if (a[i]==sx[j]){
                   cout << b[j] << endl;
                   break;
               }
           } 
        }
        cout << endl;
    }
    
    return 0;
}
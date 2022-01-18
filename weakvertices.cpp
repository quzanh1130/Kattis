#include <bits/stdc++.h>
using namespace std;
int a[25][25];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    while (true){
        cin >> n;
        if (n==-1) break;
        for (int i=0; i<n; ++i){
            for (int j=0; j<n; ++j){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++) {
            bool weak = true;
            // For each of its connections
            for(int j = 0; j < n; j++) {
                // For each of its connections
                for(int k = 0; k < n; k++) {
                    if(a[i][k]==1 && a[i][j]==1 && a[j][k]==1 && i!=k && i!=j && j!=k) {
                        weak = false;
                    }
                }
            }
            if(weak) {
                cout << i << " ";
            }
        }

        cout << endl;
    }
    return 0;
}
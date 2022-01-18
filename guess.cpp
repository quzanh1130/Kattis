#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string check;
    int left=1; int right=1000;
    while (true){
        int mid=(left+right)/2;
        cout << mid << endl;
        cin >> check;
        if (check=="lower"){
            right= mid-1;
        } else if (check=="higher"){
            left=mid+1;
        } else break;
    }
    return 0;
} 
#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> a, int n){
    int sum=0;
    while (n>2){
        sum += a[n-1] + a[n-2];
        for (int i=0; i<3; i++) a.pop_back();
        n-=3;
    }
    switch (n){
        case 1:
        sum+=a[0];
        break;

        case 2:
        sum+=a[0]+a[1];
        break;
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> a; a.resize(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    }    
    sort(a.begin(), a.end());
    cout << solve(a,n);
    return 0; 
}
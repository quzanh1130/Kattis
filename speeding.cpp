#include <bits/stdc++.h>
#define ll long long
using namespace std;
int t[1005],d[1005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;  cin >> n;
    int mx=0;
	cin >> t[0] >> d[0];
    for (int i=1; i<n; ++i){
        cin >> t[i] >> d[i];
		int result=round((d[i]-d[i-1])/(t[i]-t[i-1]));
        mx=max(mx,result);
    }
	cout << mx << endl;
    return 0;
}

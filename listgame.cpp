#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	ll n;
    cin >> n;

    int total = 0;
    while(n > 1) {
        int i;
        for(i = 2; i <= sqrt(n)+2; i++) {
            if(n % i == 0) {
                total++;
                n /= i;
                break;
            }
        }
        if(i > sqrt(n)) {
            total++;
            break;
        }
    }

    cout << total << endl;
return 0;
}
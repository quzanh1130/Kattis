#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m; cin >> n;
    while (n--){
        cin >> m;
        int sum=0;
        for (int i=0; i<m; ++i){
            long long a;
            cin >> a;
            sum +=a%m;
        }
        if (sum % m==0) printf("YES\n"); else printf("NO\n");
    }
    return 0;
}
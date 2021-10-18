#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> n;
        long long result=1;
        for (int j=n; j>=1; j--){
            result = result * j;
        }
        cout << result % 10 << endl;
    }
    return 0;
}
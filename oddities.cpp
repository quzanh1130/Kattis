#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (a[i]%2==0){
            cout << a[i] << " is even" << endl;
        } else {
            cout << a[i] << " is odd" << endl;
        }
    }
    return 0;
}


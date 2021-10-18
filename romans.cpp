
#include <iostream>

using namespace std;

int main()
{
    double x;
    cin >> x;
    int a= x * 1000.0 * (5280.0/4854.0) +0.5;
    cout << a;
    return 0;
}


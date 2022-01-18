#include <bits/stdc++.h>
using namespace std;

void nhiphan(int n){
    string s;
    while (n!=0){
       s=s+to_string(n % 2);
       n=n/2;
    }
    long long int reversed_binary = stoll(s, nullptr, 2);
    cout << reversed_binary << endl;
}

int main()
{
    int n; scanf("%d",&n);
    nhiphan(n);
    return 0;
}

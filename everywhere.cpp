#include <iostream>
#include <string>
using namespace std;

int countt(string s[1000], int n){
    int dem=0;
    string o="0";
    for (int i=0; i<n; i++){
        if (s[i].compare(o)!=0){
            for (int j=i+1; j<n; j++){
                if (s[i].compare(s[j])==0){
                         s[j]="0";
                }
            }
        dem++;
        }
    }
    return dem;
}

int main()
{
    int t,n;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> n;
        string s[n];
        for (int j=0; j<n; j++){
            cin >> s[j];
        }
        cout << countt(s,n)<< endl;
    }
    return 0;
}

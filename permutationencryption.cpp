#include <bits/stdc++.h>
using namespace std;

int main() {
    while (1) {
        int n;
        cin >> n ;

        if (n==0) return 0;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        cin. ignore(80, '\n');
     
        string input;
        getline(cin,input);
        
        while (input.length()%n!=0) {
            input += " ";
        }
        int mark=0;
        int len=input.length();
        cout << "'";
        while (mark<len) {
            string subs = input.substr(mark, n);
    
            for (int i=0; i<n; i++) {
                cout << subs[arr[i]-1] ;
            }
       
            mark += n;
        }
        cout << "'" << endl;
    }

    return 0;
}
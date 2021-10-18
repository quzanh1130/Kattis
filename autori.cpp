#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << s[0];
    while (s.find("-") < s.length() ){
        cout << s.substr(s.find("-")+1,1);
        s.erase(s.find("-"),1);
    }
    return 0;
}

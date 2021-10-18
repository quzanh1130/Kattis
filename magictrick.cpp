
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int dem=0;
    int i=0;
    while( s.length() !=0 ){
        char save=s[i];
        s.erase(i,1);
        if (s.find(save)>=0 && s.find(save)<=s.length() ){
            cout << "0";
            dem++;
            break;
        }
    }
    if (dem==0) cout << "1";
    return 0;
}



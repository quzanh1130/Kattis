#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void nenma(string s){
    int x=0;
    while (x<s.length()){
        int dem=1;
        for (int i=x; i<s.length()-1;i++){
            if (s[i]==s[i+1]){
                dem++;
            } else break;
        }
        string s1=to_string(dem);
        s.insert(x+1,s1);
        s.replace(x+2,dem-1,"");
        x+=2;
    }
    cout << s;
}

void giaima(string s){
    int x=1;
    while (x<s.length()){
        int value=0;
        for (int i=x; i<s.length();i++){
            if (s[i] >= 49 && s[i] <= 57){
                value= atoi( (s.substr(i,1)).c_str() );
                break;
            }
        }
        for (int i=1; i<=value-1; i++){
            s.insert(x+i,1,s[x-1]);
        }
        s.erase(x,1);
        x+=value;

    }
    cout << s;
}//D H3e2l3o1W1o3r4l2d1!2

int main()
{
    string a,s;
    cin >> a >> s;
    if (a=="E"){
        nenma(s);
    } else giaima(s);
    return 0;
}

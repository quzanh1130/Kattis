#include <iostream>
#include <string>
using namespace std;
int lv1(int x, int y){
        return 20000;
}

int lv2(int x, int y){
    return x+1000;
}

int lv3(int x, int y){
    string s1,s2;
    s1=to_string(x);
    s2=to_string(y);
    if (x > y) {
        s1.append(s2);
        return stoi(s1);
        } else {
            s2.append(s1);
            return stoi(s2);
        }
}

int compute(int x, int y){
     int value;
     if ((x == 1 && y==2) || (y ==1 && x==2)){
            value= lv1(x,y);
        }else {
            if (x==y) {value=lv2(x,y);
            } else  value=lv3(x,y);
        }
        return value;
}

void winner(int a, int b, int c, int d){
    int value1,value2;
    value1=compute(a,b);
    value2=compute(c,d);
    if ( value1 > value2) {
         cout << "Player 1 wins." << endl;
    }  else {
        if ( value1 < value2){
             cout << "Player 2 wins." << endl;
        } else {
             cout << "Tie." << endl;
        }
    }
}

int main()
{
    int a,b,c,d;
    do {
        cin >> a >> b >> c >> d;
        if( a<=0 && b <=0 && c <=0 && d<=0) break;
        winner(a,b,c,d);
    } while ( a>0 && b >0 && c >0 && d>0 );

    return 0;
}

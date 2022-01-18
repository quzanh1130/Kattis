#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    for (auto x:s){
        x=tolower(x);
        int dk=1;
        switch (x){
        case ' ':
            printf(" ");
            dk=0;
            break;
        case 'a':
            printf("@");
            dk=0;
            break;
        case 'b':
             printf("8");
             dk=0;
            break;
        case 'c':
             printf("(");
             dk=0;
            break;
        case 'd':
             printf("|)");
             dk=0;
            break;
        case 'e':
             printf("3");
             dk=0;
            break;
        case 'f':
             printf("#");
             dk=0;
            break;
        case 'g':
             printf("6");
             dk=0;
            break;
        case 'h':
             printf("[-]");
             dk=0;
            break;
        case 'i':
             printf("|");
             dk=0;
            break;
        case 'j':
             printf("_|");
             dk=0;
            break;
        case 'k':
             printf("|<");
             dk=0;
            break;
        case 'l':
             printf("1");
             dk=0;
            break;
        case 'm':
             printf("[]\\/[]");
             dk=0;
            break;
        case 'n':
             cout <<"[]\\[]";
             dk=0;
            break;
        case 'o':
             printf("0");
             dk=0;
            break;
        case 'p':
             printf("|D");
             dk=0;
            break;
        case 'q':
            printf("(,)");
            dk=0;
            break;
        case 'r':
             printf("|Z");
             dk=0;
            break;
        case 's':
             printf("$");
             dk=0;
            break;
        case 't':
             printf("']['");
             dk=0;
            break;
        case 'u':
             printf("|_|");
             dk=0;
            break;
        case 'v':
             printf("\\/");
             dk=0;
            break;
        case 'w':
             printf("\\/\\/");
             dk=0;
            break;
        case 'x':
             printf("}{");
             dk=0;
            break;
        case 'y':
             printf("`/");
             dk=0;
            break;
        case 'z':
             printf("2");
             dk=0;
            break;
        }
        if (dk==1) cout << x;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin >> s;
    int i=0;
    while (i<s.size()){
            t=s.substr(i,3);
            if(t=="RBL")  {printf("C"); i+=3; continue;}
            if(t=="BLR")  {printf("C"); i+=3; continue;}
            if(t=="LRB")  {printf("C"); i+=3; continue;}
            if(t=="RLB")  {printf("C"); i+=3; continue;}
            if(t=="BRL")  {printf("C"); i+=3; continue;}
            if(t=="LBR")  {printf("C"); i+=3; continue;}
        switch (s[i]) {
            case 'R': printf("S"); i+=1; break;
            case 'B': printf("K"); i+=1; break;
            case 'L': printf("H"); i+=1; break;
        }
    }
    return 0;
}

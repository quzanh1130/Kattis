#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0; char b,c[2];
    scanf("%d %c",&n, &b);
    for (int i=0; i<n*4; ++i){
        cin >> c[0] >> c[1];
        if (c[1]==b){
            switch (c[0]){
            case 'A':
                sum+=11;
                break;
            case 'K':
                sum+=4;
                break;
            case 'Q':
                sum+=3;
                break;
            case 'J':
                sum+=20;
                break;
            case 'T':
                sum+=10;
                break;
            case '9':
                sum+=14;
                break;
            case '8':
                sum+=0;
                break;
            case '7':
                sum+=0;
                break;
            }
        } else {
            switch (c[0]){
            case 'A':
                sum+=11;
                break;
            case 'K':
                sum+=4;
                break;
            case 'Q':
                sum+=3;
                break;
            case 'J':
                sum+=2;
                break;
            case 'T':
                sum+=10;
                break;
            case '9':
                sum+=0;
                break;
            case '8':
                sum+=0;
                break;
            case '7':
                sum+=0;
                break;

            }
        }
    }
    printf("%d",sum);
    return 0;
}

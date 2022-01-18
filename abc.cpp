#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[3];
    for (int i=0; i<3; i++){
        scanf("%d", &a[i]);
    }
    sort(a,a+3);
    char c;
    for (int i=0; i<3; i++){
        cin >> c;
        switch (c){
        case 'A':
            printf("%d ",a[0]);
            break;
        case 'B':
            printf("%d ",a[1]);
            break;
        case 'C':
            printf("%d ",a[2]);
            break;
        }
    }
    return 0;
}
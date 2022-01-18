#include <bits/stdc++.h>
using namespace std;

void solve(int d, int x){
    int k=d%7;
    if (d%7==0) k=7;
    for (int i=1; i<k; ++i){
        x++;
        if (x==9) x=2;
    }
    switch (x){
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;
    case 8:
        cout << "Sunday";
        break;
    }
}

int main(){
   int d,m; scanf("%d %d",&d,&m);
   switch (m){
    case 1:
        solve(d,5);
        break;
    case 2:
        solve(d,8);
        break;
    case 3:
        solve(d,8);
        break;
    case 4:
        solve(d,4);
        break;
    case 5:
        solve(d,6);
        break;
    case 6:
        solve(d,2);
        break;
    case 7:
        solve(d,4);
        break;
    case 8:
        solve(d,7);
        break;
    case 9:
        solve(d,3);
        break;
    case 10:
        solve(d,5);
        break;
    case 11:
        solve(d,8);
        break;
    case 12:
        solve(d,3);
        break;
    }
   return 0;
}

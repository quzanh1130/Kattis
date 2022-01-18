#include <bits/stdc++.h>
using namespace std;

int god[500], mecha[500];
void doc(int g, int m){
    for (int i=0; i<g; i++){
        scanf("%d",&god[i]);
    }
    for (int i=0; i<m; i++){
        scanf("%d",&mecha[i]);
    }
}

bool dq(int g, int m){
    sort(god, god +g);
    sort(mecha, mecha+m);
    if (god[0]==10001 ) return true;
    if (mecha[0]==10001) return false;
    for (int i=0; i<min(g,m); i++){
        if (mecha[i]>10000 || god[i] > 10000) return dq(g,m);
        if (mecha[i] <= god[i]) mecha[i]=10001; else god[i]=10001;
    }
    return dq(g,m);
}


int main(){
    int n,g,m; scanf("%d", &n);
    for(int i=0; i<n ; i++){
        scanf("%d %d",&g,&m);
        doc(g,m);
        if (dq(g,m)) printf("MechaGodzilla\n"); else printf("Godzilla\n");
    }
    return 0;
}

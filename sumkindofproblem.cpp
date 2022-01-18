#include <bits/stdc++.h>
using namespace std;
vector <int> s1,s2,s3;
void solve(int n,int index){
        s1.resize (n+1);
        s2.resize (n+1);
        s3.resize (n+1);
        int i=index+1;
        while (i<=n){
            s1[i]=s1[i-1] +i;
            s2[i]=s2[i-1] +(2*i-1);
            s3[i]=s3[i-1] +2*i;
            i++;
        }
}
    

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m;
    int index=1; 
    s1.resize(2); s2.resize(2); s3.resize(2);
    s1[1]=1; s2[1]=1; s3[1]=2;
    cin >> m;

    for (int i=0; i<m; i++){
        cin >> n >> n;
        if (index < n) { solve(n,index); index =n;} 
        cout << i+1 << " " << s1[n] << " " << s2[n] << " " << s3[n] << endl;
    }
    return 0; 
}
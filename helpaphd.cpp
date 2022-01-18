#include <bits/stdc++.h>
using namespace std;

void compute(string s){
    int a= atoi( (s.substr(0, s.find('+') )).c_str() );
    int b= atoi( (s.substr(s.find('+')+1,s.size()-s.find('+') )).c_str() );
    printf("%d\n",a+b);
}

int main(){
    int n; scanf("%d",&n); getchar();
    string s;
    for (int i=0; i<n; ++i){
        cin >> s;
        if (s[0]>='0' && s[0] <='9') compute(s); else printf("skipped\n");
    }
    return 0;
}
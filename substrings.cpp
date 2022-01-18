#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define sci(a) scanf("%d", &a)
#define scii(a,b) scanf("%d %d", &a, &b)
#define scc(a) scanf("%c", &a)
#define scs(s) scanf("%[^\n]", s)
#define fto(i, a, b) for(int i = a; i <= b; ++i)
#define fdto(i, a, b) for (int i = a; i >= b; --i)
#define ff first
#define ss second
#define pri(a) printf("%d ", a)
#define pril(a) printf("%d\n", a)
#define maxN 100005
#define oo 1000000007

using namespace std;

vi computeLPSArray(string pat, int M, vi prefixArr) {
    int len = 0;
    int i = 1;
    prefixArr[0] = 0; // prefixArr[0] is always 0
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            prefixArr[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = prefixArr[len - 1];
            } else { // if (len == 0)
                prefixArr[i] = len;
                i++;
            }
        }
    }
    return prefixArr;
}

int main() {
    int n; sci(n);
    string pat;
    while (n--) {
        getline(cin, pat);
        int M = pat.size();
        vi prefixArr;
        prefixArr.resize(M);
        int j = 0;
        prefixArr = computeLPSArray(pat, M, prefixArr);
        int i = 0; // index for txt[]

        puts("");
    }
    return 0;
}


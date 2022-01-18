#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long double  pi   = 4.0*atanl(1.0);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string name,study,born; int course;
    int n; cin >> n;
    while (n--){
        cin >> name >> study >>born >>course;
        int tmp1=stoi(study.substr(0,4));
        int tmp2=stoi(born.substr(0,4));
        if (tmp1>=2010) cout << name << " " << "eligible" << endl; else
            if (tmp2>=1991) cout << name << " " << "eligible" << endl; else
                if (course >=41) cout << name << " " << "ineligible" << endl; else
                    cout << name << " " << "coach petitions" << endl;
    }
    return 0;
}
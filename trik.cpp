#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int a,b,c;
    int arr[3] = {1,0,0};
    for (int i=0; i< s.size();i++){
        switch (s[i]){
            case 'A':
            swap(arr[0],arr[1]);
            break;
            
            case 'B':
            swap(arr[1],arr[2]);
            break;
            
            case 'C':
            swap(arr[2],arr[0]);
            break;
        }
    } 
    for (int i=0; i<3; i++){
        if (arr[i]==1){
            cout << i+1;
            break;
        }
    }
    return 0;
}
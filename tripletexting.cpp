#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string textString;
    cin >> textString;

	string returnString = "";
    ll actualLength = textString.size() / 3;
    ll index = 0;

    for(index = 0; index < actualLength; index++)
    {
    	ll firstIndex = index;
    	ll secondIndex = index + actualLength;
    	ll thirdIndex = index + actualLength * 2;

    	if (textString[firstIndex] != textString[secondIndex] || textString[secondIndex] != textString[thirdIndex])
    		{
    			if(textString[firstIndex] == textString[secondIndex])
    			{
    				returnString.push_back(textString[firstIndex]);
    			}
    			else if(textString[secondIndex] == textString[thirdIndex])
    			{
    				returnString.push_back(textString[secondIndex]);
    			}
    			else
    			{
    				returnString.push_back(textString[firstIndex]);
    			}
    		}
    	else 
    		returnString.push_back(textString[firstIndex]);

    }

    cout << returnString << "\n";
    return 0;
}

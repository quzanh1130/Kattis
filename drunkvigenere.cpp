#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

char decrypt(string cipher, string key, int keyIndex, int cipherIndex, bool forward)
{
	char retChar;
	int retNum = (cipher[cipherIndex] - 'A');

	if(forward)
	{
		retNum += (key[keyIndex] - 'A');
	}
	else
	{
		retNum -= (key[keyIndex] - 'A');
		if(retNum < 0)
		{
			retNum = 26 + retNum;
		} 
	}
	retNum %= 26;
	retChar = char('A' + retNum);
	return retChar;
}
int main()
{
    ll i, j, k;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string cipher;
    string key;
    string plain = "";
    cin >> cipher >> key;

    int keyIndex = 0;
    for(i = 0; i < (int)cipher.size(); i++)
    {
    	char charToAdd;
    	if(i % 2 == 1)
    	{
    		charToAdd = decrypt(cipher, key, keyIndex, i, true);
    	}
    	else
    	{
    		charToAdd = decrypt(cipher, key, keyIndex, i, false);
    	}
    	plain += charToAdd;
    	keyIndex++;
    	keyIndex %= key.size();
    }

    cout << plain;
    return 0;
}
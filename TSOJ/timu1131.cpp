#include <iostream>
#include <cstring>
using namespace std;
int searchMaxSubString(char *source);
int t;
int n;
char str[100][101];
int i;
char *revstr(char *str)
{
	char *left;
	char *right;
	left = right = str;
	char tmpch;
	while(*right)
	{
		right++;
	}
	right--;
	while(left < right)
	{
		tmpch = *left;
		*(left++) = *right;
		*(right--) = tmpch;
	}
	return str;
}
int main()
{
	int minStrLen;
	char minstr[101];
	int subStrLen;
	while(cin >> t)
	{
		while(t--)
		{
			cin >> n;
			minStrLen = 100;
			for(i = 0; i < n; ++i)
			{
				cin >> str[i];
				if(strlen(str[i]) < minStrLen)
				{
					strcpy(minstr, str[i]);
					minStrLen = strlen(minstr);
				}
			}
			subStrLen = searchMaxSubString(minstr);
			cout << subStrLen << endl;
		}
	}
	return 0;
}
int searchMaxSubString(char *source)
{
	int sourceLen = strlen(source);
	int subStrLen = strlen(source);
	char subStr[101];
	char reverseStr[101];
	bool foundMaxStr;
	while(subStrLen > 0)
	{
		for(int i = 0; i <= sourceLen - subStrLen; ++i)
		{
			strncpy(subStr, source + i, subStrLen);
			strncpy(reverseStr, source + i, subStrLen);
			subStr[subStrLen] = reverseStr[subStrLen] = '\0';
			revstr(reverseStr);
			foundMaxStr = true;
			for(int j = 0; j < n; ++j)
			{
				if(strstr(str[j], subStr) == NULL && strstr(str[j], reverseStr) == NULL)
				{
					foundMaxStr = false;
					break;
				}
			}

			if(foundMaxStr)
				return subStrLen;
		}
		subStrLen--;
	}
}

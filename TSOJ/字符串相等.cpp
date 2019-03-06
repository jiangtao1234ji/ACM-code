#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int N = 1000;
char S1[N],S2[N];

void fun(char *S)
{
	int i, j;
	for (i=0,j=0; S[i]!='\0'; i++)
	{
		if (S[i] == ' ')
			continue;
		if (S[i]>='A' && S[i]<='Z')
			S[j++] = S[i] + 32;
		else
			S[j++] = S[i];
	}
	S[j] = '\0';
}

int main()
{
	int n;
	while(cin>>n)
	{
		int q=n;
		while(n--)
		{
			if(n==q-1)
				getchar();
			gets(S1);
			gets(S2);
			fun(S1);
			fun(S2);
			if (strcmp(S1, S2) == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}

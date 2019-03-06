#include <iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
	char a[100];
	while(1)
	{
		int count=0;
		for(int i=0; ; i++)
		{
			scanf("%c", &a[i]);
			if(a[i]=='\n')
				break;
			count++;
		}
		if(a[0]=='0')
			break;
		long long num=0;
		for(int i=0; i<count; ++i)
		{
			num+=(a[i]-'0')*(pow(2,count-i)-1);
		}
		cout<<num<<endl;

	}

	return 0;
}

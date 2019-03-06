#include<stdio.h>
#define bool char
#define ture 1
#define false 0
int main()
{
	unsigned long str;
	bool parity = false;
	while(scanf("%lu",str)!=EOF)
	{
		while (str)
		{
			parity = !parity;
			str = str & (str - 1);
		}
		if(parity)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
	return 0; 
}

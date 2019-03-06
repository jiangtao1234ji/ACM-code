#include<stdio.h>
#include<string.h>
char str[80000000];
int main()
{
	int i, a=0, c=0, d=0;
	while(scanf("%s",str)!=EOF)
	{
		a=strlen(str);
		for(i=0; i<a; i++)
		{
			if(str[i]=='1')
			{
				c+=1;
			}
			if(str[i]=='0')
			{
				d+=1;
			}
		}
		if(c%2==1&&d%2==1)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
			c=0;
			d=0;
	}
}

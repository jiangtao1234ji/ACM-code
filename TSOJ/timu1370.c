#include<stdio.h>
int main()
{
	char a[2];
	int sum=0, num=0;
	while(scanf("%c", &a[0])!=EOF)
	{
		if(a[0]=='0')
		{
			sum++;
		}
		else
		{
			num++;
		}
		while((a[1]=getchar())!='\n')
		{
			if(a[1]=='0')
			{
				sum++;
			}
			else
			{
				num++;
			}
		}
		if((sum%2==1)&&(num%2==1))
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
		sum=0;
		num=0;
	}
	return 0;
}

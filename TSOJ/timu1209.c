#include<stdio.h>
int fun(int m)
{
	int i;
	for(i=2; i*i<=m; i++)
		if(m%i==0)
		{
			return 0;
			break;
		}
	return 1;
}

int main()
{
	int m,i,a=0,b=0;
	while(scanf("%d",&m)!=EOF)
	{
		for(i=m; i>1; i--)
		{
			if(fun(i)==1)
			{
				a=i;
				b=a-2;
				if(fun(b)==1)
				{
					printf("%d %d\n",b,a);
					break;
				}
			}
		}
	}
}

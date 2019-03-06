#include<stdio.h>
int main()
{
	int x, count=0;
	while(scanf("%d", &x)!=EOF)
	{
		while(x)
		{
			if(x%2==0)
			{
				x/=2;
			}
			else
			{
				x-=1;
				count+=1;
			}
		}
		printf("%d\n",count);
		count=0;
	}
	return 0;
}

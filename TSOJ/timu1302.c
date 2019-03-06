#include<stdio.h>
int main()
{
	int a, b, i, j, max1, max;
	while(scanf("%d %d", &a, &b)!=EOF)
	{
		for(j=1; j<=a; j++)
		{
			if(a%j==0)
			{
				max1=j;
				if(b%max1==0)
				{
					max=max1;
				}
			}
		}
		printf("%d\n", max);
		getchar();
	}
	return 0;
}


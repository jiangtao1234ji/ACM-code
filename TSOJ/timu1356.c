#include<stdio.h>
int main()
{
	int n, i, j;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d:\n", n);
		for(i=1; i<=n; i++)
		{
			for(j=1; j<=i; j++)
			{
				if(j%2==1)
					printf("*");
				if(j%2==0)
					printf("-");
			}
			printf("\n");
		}
	}
}

#include<stdio.h>
int main()
{
	int a[10000], b[10000], n, i, j, max1, max;
	while(scanf("%d", &n)!=EOF)
	{
		for(i=0; i<n; i++)
		{
			scanf("%d %d", &a[i], &b[i]);
		}
		for(i=0; i<n; i++)
		{
			for(j=1; j<=a[i]; j++)
			{
				if(a[i]%j==0)
				{
					max1=j;
					if(b[i]%max1==0)
					{
						max=max1;
					}
				}
			}
			printf("%d\n", max);
		}
	}
	return 0;
}

#include<stdio.h>
int main()
{
	long a[10000], b[10000], n, i, j, max1, max, min;
	while(scanf("%ld", &n)!=EOF)
	{
		for(i=0; i<n; i++)
		{
			scanf("%ld %ld", &a[i], &b[i]);
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
			min=(a[i]*b[i])/max;
			printf("%ld\n", min);
		}
	}
	return 0;
}

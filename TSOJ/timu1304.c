#include<stdio.h>
int main()
{
	long a, b, i, j, max1, max, min;
	while(scanf("%ld %ld", &a, &b)!=EOF)
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
		min=(a*b)/max;
		printf("%ld\n", min);
	}
	return 0;
}

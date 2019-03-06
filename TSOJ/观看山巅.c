#include<stdio.h>
long a[100100]; 
int main()
{
	long n, i, count=1, max;
	while(scanf("%ld", &n)!=EOF)
	{
		for(i=0; i<n; i++)
		{
			scanf("%ld", &a[i]);
		}
		max=a[0];
		for(i=0; i<n; i++)
		{
			if(max<a[i])
			{
				max=a[i];
				count+=1;
			}
		}
		printf("%ld\n", count);
		count=1;
	}
	return 0;
} 

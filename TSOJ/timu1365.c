#include <stdio.h>
#include <stdlib.h>
int a[95500], n;
int max1()
{
	int i;
	int max = a[0];
	int sum  = a[0];
	for(i = 1; i < n; i++)
	{
		if(sum <= 0)
			sum = a[i];
		else
			sum += a[i];

		if(sum > max)
			max = sum;
	}
	return max;
}

int main()
{
	int i;
	while(scanf("%d", &n)!=EOF)
	{
		for(i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
		}
		printf("%d\n", max1());
	}
	return 0;
}

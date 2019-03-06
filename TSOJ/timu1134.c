#include<stdio.h>
int main()
{
	int n; 
	long long sum=1;
	while(scanf("%d", &n)!=EOF)
	{
		while(n)
		{
			sum*=n;
			n--;
		}
		printf("%lld\n", sum);
		sum=1;
	}
}

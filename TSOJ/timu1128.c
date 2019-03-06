#include<stdio.h>
int main()
{
	int n, m, i, a[1001], num=0, sum, b=0;
	while(scanf("%d %d", &n, &m)!=EOF)
	{
		for(i=1; i<=n; i++)
		{
			a[i]=i;
		}
		sum=n;
		for(i=1; ; i++)
		{
			if(i>n)
			{
				i=i%n;
			}
			if(a[i]>0)
				num++;
			if(num==m)
			{
				b++;
				if(b<n)
				printf("%d", a[i]);
				if(b==n) printf("%d\n", a[i]);
				if(b<n)
				{
					printf(" ");
				}
				a[i]=0;
				num=0;
				sum--;
			}
			if(sum==0) break;
		}
		num=0;
		b=0;
	}
	return 0;
}

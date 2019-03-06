#include<stdio.h>
#include<math.h>
long long c[150000]= {0};
long long fun(int n)
{
	long long i;
	if(n<2) return 0;
	for( i=2; i*i <= n; i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	long long i,a,b,count=0,j=0,num=0;
	while(scanf("%lld %lld", &a, &b)!=EOF)
	{

		for(i=a; i<=b/2; i++)
		{
			if(fun(i))
			{
				c[j]=i;
				j++;
				num++;
			}
		}
		for(j=0; j<num; j++)
		{
			if(c[j]*c[j]*c[j]<=b)
			{
				count+=1;
			}
			else break;
		}
		for(j=0; j<num; j++)
		{
			for(i=j+1; i<num; i++)
			{
				if(c[j]*c[i]<=b)
				{
					count+=1;
				}
				if(c[j]*c[i]>b) break;
			}
		}
		printf("%lld\n", count);
		count=0;
		num=0;
		j=0;
	}
	return 0;
}

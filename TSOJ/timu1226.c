#include<stdio.h>
int fun(int a,int b)
{
	int a1=a,b1=b,la=10,lb=10;
	while(a/la)
	{
		la*=10;
	}
	while(b/lb)
	{
		lb*=10;
	}
	return (a*lb+b)-(b*la+a);
}
int main()
{
	int i,j,n;
	long long data[100000], temp;
	while(scanf("%lld",&n)!=EOF)
	{
		for(i=0; i<n; i++)
		{
			scanf("%lld",&data[i]);
		}
		for(j=0; j<n-1; j++)
			for(i=0; i<n-1-j; i++)
			{
				if(fun(data[i],data[i+1])<0)
				{
					temp=data[i+1];
					data[i+1]=data[i];
					data[i]=temp;
				}
			}
		for(i=0; i<n; i++)
		{
			printf("%lld",data[i]);
		}
		printf("\n");
	}
	return 0;
}

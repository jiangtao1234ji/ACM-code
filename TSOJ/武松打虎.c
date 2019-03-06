#include<stdio.h>
int main()
{
	long n, t, i, j, sum, m, count=0;
	long a[50010];
	int iTemp;
	int iPos;
	while(scanf("%ld %ld", &n, &t)!=EOF)
	{
		for(i=0; i<n; i++)
		{
			scanf("%ld", &a[i]);
		}
		for(i=0; i<n-1; i++)
		{
			iTemp=a[i];
			iPos=i;
			for(j=i+1; j<n; j++)
			{
				if(a[j]<iTemp)
				{
					iTemp=a[j];
					iPos=j;
				}
			}
			a[iPos]=a[i];
			a[i]=iTemp;
		}
		sum=t;
		for(i=0; i<n; i++)
		{
			sum-=a[i];
			if(sum>0||sum==0)
			{
				count+=1;
			}
			if(sum<0) break;
		}
		printf("%ld\n", count);
		count=0;
	}
	return 0;
}

#include<stdio.h>
int m, n, t;
void answer()
{
	int  a[100000], b[100000];
	int sum=0;
	int i, j, c, d;
	int L[100000], R[100000];
	for( i=0, j=0; i<m, j<m; i++, j++)
	{
		scanf("%d %d", &L[i], &R[j]);
	}
	for(c=0, d=0; c<t, d<t; c++, d++)
	{

		scanf("%d %d", &a[c], &b[d]);
	}
	for(c=0, d=0; c<t, d<t; c++, d++)
	{
		for( i=0, j=0; i<m, j<m; i++, j++)
		{
			if ((R[j]<a[c])||(L[i]>b[d]))
			{

			}
			else if((L[i]<=a[c])&&(R[j]>=b[d]))
			{
				sum+=(b[d]-a[c]+1);
			}
			else if((L[i]>=a[c])&&(R[j]<=b[d]))
			{
				sum+=(R[j]-L[i]+1);
			}
			else if((L[i]>=a[c])&&(R[j]>=b[d]))
			{
				sum+=(b[d]-L[i]+1);
			}
			else if((L[i]<=a[c])&&(R[j]<=b[d]))
			{
				sum+=(R[j]-a[c]+1);
			}
		}
		printf("%d\n", sum);
		sum=0;
	}
}
int main()
{
	int i;
	while(scanf("%d %d %d", &n, &m, &t)!=EOF)
	{
		answer();
	}
	return 0;
}



#include<stdio.h>
long int m;
void answer()
{
	long int n, a, b;
	long int sum=0;
	long int i, j, k;
	long int L[10000],R[10000];
	printf("请输入区间: \n");
	for( i=1,j=1; i<=m, j<=m; i++,j++)
	{
		scanf("%d %d", &L[i], &R[j]);
	}
	printf("请输入要查询的区间:\n");
	scanf("%d %d", &a, &b);
	for( i=1,j=1; i<=m, j<=m; i++,j++)
	{
		if ((R[j]<a)||(L[i]>b))
		{

		}
		else if((L[i]<=a)&&(R[j]>=b))
		{
			sum+=(b-a+1);
		}
		else if((L[i]>=a)&&(R[j]<=b))
		{
			sum+=(R[j]-L[i]+1);
		}
		else if((L[i]>=a)&&(R[j]>=b))
		{
			sum+=(b-L[i]+1);
		}
		else if((L[i]<=a)&&(R[j]<=b))
		{
			sum+=(R[j]-a+1);
		}
	}
	printf("花的总数是:%d\n", sum);
}
int main()
{
	int n;
	printf("请输入花的总数和次数:\n");
	while(scanf("%d %d", &n, &m)!=EOF)
	{
		answer();
	}
	return 0;
}



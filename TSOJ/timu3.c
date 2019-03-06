#include<stdio.h>
int fun();
int a[100], b[100], c, sum, i, j;
int main()
{
	int n;
	scanf("%d", &n);
	for(i=0, j=0; i<n, j<n; i++, j++)
	{
		scanf("%d %c %d", &a[i], &c, &b[j]);
		sum=fun();
	}





}
int fun()
{
	if(c=='+')
	{
		sum=a[i]+b[j];
		printf("%d", sum);
	}
	if(c=='-')
	{
		sum=a[i]-b[j];
		printf("%d", sum);
	}
	if(c=='*')
	{
		sum=a[i]*b[j];
		printf("%d", sum);
	}
	if(c=='/')
	{
		sum=a[i]/b[j];
		printf("%d", sum);
	}
	return sum;
}

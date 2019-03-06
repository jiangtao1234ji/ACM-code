#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int s=0;//用来计数
//计算阶乘
int total(int n)
{
	int i,sum=1;
	for(i=1; i<=n; i++)
	{
		sum*=i;
	}
	return sum;
}
//交换
void change(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
//求全排列
void permutation(int a[],int begin,int n,int b[])
{
	int i;
	if(begin>=n)
	{
		for(i=0; i<n; i++)
		{
			b[i+s*n]=a[i];
//          printf("%d",a[i]);
		}
		s++;
	}
	else
	{
		for(i=begin; i<n; i++)
		{
			if(i!=begin)
			{
				change(&a[i],&a[begin]);
			}
			permutation(a,begin+1,n,b);
			if(i!=begin)
			{
				change(&a[i],&a[begin]);
			}
		}
	}
}
int main()
{
	int n,i,j,k,t=0,z,sum,m,sum1=0;
	int *a,*b;
	int *c;
	printf("输入需要的个数：");
	scanf("%d",&n);
	z=n-1;
	int begin=0;
	sum=total(n);
	a=(int *)malloc(n*sizeof(int));
	b=(int *)malloc((n*sum)*sizeof(int));
	c=(int *)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
	{
		a[i]=i+1;
	}
	permutation(a,begin,n,b);
	for(j=0; j<n*sum; j+=n)
	{
		for(k=0; k<n; k++)
		{
			sum1+=b[k+j]*pow(10,z);
			z--;
		}
		c[t++]=sum1;
		z=n-1;
		sum1=0;
	}
	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	for(i=0; i<t; i++)
	{
		printf("%d\n",c[i]);
	}
	return 0;
}

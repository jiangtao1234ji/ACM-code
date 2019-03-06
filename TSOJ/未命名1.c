#include<stdio.h>
#include<stdlib.h>
int s=0;

int total(int n)
{
	int i,sum=1;
	for(i=1; i<=n; i++)
	{
		sum*=i;
	}
	return sum;
}


void Swap(int *lhs, int *rhs)
{
	int t = *lhs;

	*lhs = *rhs;
	*rhs = t;
}

void permutation(int source[], int begin, int end, int b[])
{
	int i;
	if (begin >= end)
	{
		for (i = 0; i < end; i++)
		{
			b[i+s]=source[i];
			printf("%d", source[i]);
		}
		printf("\n");
	}
	else
	{
		for (i = begin; i < end; i++)
		{
			if (begin != i)
			{
				Swap(&source[begin], &source[i]);
			}
			permutation(source, begin + 1, end,b);

			if (begin != i)
			{
				Swap(&source[begin], &source[i]);
			}
		}
	}
}

int main()
{
	int n,i,j,k,t,z,sum;
	int *a,*b;
	printf("???????:");
	scanf("%d",&n);
	int begin=0;
	sum=total(n);
	a=(int *)malloc(n*sizeof(int));
	b=(int *)malloc((n*sum)*sizeof(int));
	for(i=0; i<n; i++)
	{
		a[i]=i+1;
	}
	permutation(a,begin,n,b);

	for(i=0; i<sum; i+=n)
	{
		for(j=i; j<sum-i-1; j++)
		{
			for(k=0; k<n; k++)
			{
				if(b[k+j]!=b[k+j+n])
				{
					if(b[k+j]>b[k+j+n])
					{
						for(z=0; z<n; z++)
						{
							t=b[z+j];
							b[z+j]=b[z+j+n];
							b[z+j+n]=t;
						}
						break;
					}
					else break;
				}
			}
		}
	}
	for(i=0; i<n*sum; i++)
	{
		printf("%d",b[i]);
		if((i+1)%n==0)
			printf("\n");
	}
	return 0;
}

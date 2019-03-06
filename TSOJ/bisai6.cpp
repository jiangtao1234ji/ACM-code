#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	int i,j,n,L,R,sum=0,a[99999];
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	for(i=0; i<n; i++)
	{
		sum++;
		L=a[i];
		R=a[i];
		for(j=i+1; j<n; j++)
		{
			if(a[j]>R)
				R=a[j];
			if(a[j]<L)
				L=a[j];
			if(R-L==j-i)
				sum++;
		}
	}
	printf("%d\n",sum);
	return 0;
}


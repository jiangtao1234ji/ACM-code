#include <stdio.h>
#include <math.h>
main()
{
	int n,s;
	int i,p=1;
	int a[8],b[8];
	while(scanf("%d",&n)!=EOF)
	{
		s=n;
		if(n<0)
		{
			n=abs(n);
			a[0]=1;
		}
		else
			a[0]=0;

		for(i=7; i>0; --i)
		{
			a[i]=n%2;
			n /= 2;
		}
		for(i=0; i<8; ++i)
		{
			printf("%d",a[i]);
		}
		printf("\n");
	}
}

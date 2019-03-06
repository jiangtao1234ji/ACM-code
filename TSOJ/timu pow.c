#include<stdio.h>
#include<math.h>
int main()
{
	int a[10], b[10], c;
	int i, j;
	for( i=0, j=0; i<10, j<10; i++, j++)
	{
		scanf("%d %d", &a[i], &b[j]);
		c=(int)pow(a[i],b[j])%10;
		if((int)pow(a[i],b[j])%10==0)
		{
			c=0;
			printf("%d\n", c);
		}
		else
		{
			printf("%d\n", c);
		}
	}
	return 0;
}




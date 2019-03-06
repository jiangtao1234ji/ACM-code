#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	while(scanf("%d,%d", &a, &b)!=EOF)
	{
		c=(int)pow(a,b)%10;
		if((int)pow(a,b)%10==0)
			printf("%d\n", c);

	}

}


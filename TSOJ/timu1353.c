#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	while(scanf("pow(%d,%d)", &a, &b)!=EOF)
	{
		if(pow(a,b)< 2,147,483,647 )
		{

			c=(int)pow(a,b)%10;
			if(b==0)
			{
				printf("1");
			}
			else
				printf("%d\n", c);
			scanf("\n");
		}
	}
	return 0;

}


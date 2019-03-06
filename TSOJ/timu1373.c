#include<stdio.h>
int main()
{
	int a, b, ans=0;
	char c;
	while(scanf("%d", &a)!=EOF)
	{
		c=getchar();
		scanf("%d", &b);
		if(c=='+') ans=a+b;
		if(c=='-') ans=a-b;
		for(;;)
		{
			c=getchar();
			if(c=='\n') break;
			scanf("%d", &b);
			if(c=='+')
			{
				ans+=b;
			}
			else if(c=='-')
			{
				ans-=b;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}

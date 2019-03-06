#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(a>0||a<=10000||b>0||b<=10000)
		{

			printf("%d\n",a+b);
		}
		else return 0;
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
#define m 10007
int Fn[1000100];
int main()
{
	int n, i;
	while(scanf("%d", &n)!=EOF)
	{
		Fn[0]=1;
		Fn[1]=1;
		for(i=2; i<n; i++)
		{
			Fn[i]=(Fn[i-1]+Fn[i-2])%m;
		}
		printf("%d\n", Fn[n-1]);
		memset(Fn,0,sizeof(Fn));
	}
	return 0;
}

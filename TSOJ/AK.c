#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, time[1000];
	char result[1000], problem[1000];
	char b[10]="AC", c[10]="WA";
	int sum=0, a=0;
	while(scanf("%d", &n)!=EOF)
	{
		getchar();
		for(i=0; i<n; i++)
		{
			scanf("%c", &problem[i]);
			scanf("%c", &result[i])
			scanf("%d", &time[i]);
		}
		for(i=0; i<n; i++)
		{
			if(strcmp(&result[i],b)==0)
			{
				sum+=time[i];
			}
			if(problem[i]==problem[i+1])
			{
				if(strcmp(&result[i],c)==0)
				{
					sum+=20;
					a++;
				}
			}
			else
			{
				if(strcmp(&result[i],c)==0)
				{
					sum-=(a*20);
					a=0;
				}
			}
		}
		printf("%d\n", sum);
		sum=0;
		a=0;
	}
}

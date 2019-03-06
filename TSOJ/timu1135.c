#include<stdio.h>
struct stu
{
	int time;
	char city[10];
};
int main()
{
	int n, i, j;
	struct stu c[100], t;
	while(scanf("%d", &n)!=EOF)
	{
		for(i=0; i<n; i++)
		{
			scanf("%s %d", &c[i].city, &c[i].time);
		}
		for(i=0; i<n; i++)
		{
			for(j=0; j<n-1; j++)
			{
				if(c[j].time>c[j+1].time)
				{
					t=c[j];
					c[j]=c[j+1];
					c[j+1]=t;
				}
			}
		}
		for(i=0; i<n; i++)
		{
			printf("%d %s\n", c[i].time, c[i].city);
		}
	}
}

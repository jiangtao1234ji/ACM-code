#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

struct node
{
	long long int a,b,c;
} p[10005];
int q[10005];
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		for(int i=1; i<=n; i++)
		{
			scanf("%lld%lld%lld",&p[i].a,&p[i].b,&p[i].c);
			q[i]=i;
		}
		for(int i=1; i<n; i++)
		{
			for(int j=i+1; j<=n; j++)
			{
				if((p[q[j]].a+p[q[j]].b)*p[q[i]].c<(p[q[i]].a+p[q[i]].b)*p[q[j]].c)
				{
					int temp=q[j];
					q[j]=q[i];
					q[i]=temp;
				}
				if((p[q[j]].a+p[q[j]].b)*p[q[i]].c==(p[q[i]].a+p[q[i]].b)*p[q[j]].c)
				{
					if(q[j]<q[i])
					{
						int temp=q[j];
						q[j]=q[i];
						q[i]=temp;
					}
				}
			}
		}
		for(int i=1; i<=n; i++)
		{
			if(i==1)
				printf("%d",q[i]);
			else
				printf(" %d",q[i]);
		}
		printf("\n");
	}
	return 0;
}


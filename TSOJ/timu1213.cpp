#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n, k, i, j, m=0, count=0, num=0;
	int a[1000]= {0};
	while(cin>>n>>k)
	{
		for(i=2; i<=k; i++)
		{
			for(j=1; j<=n; j++)
			{
				if(j%i==0)
				{
					if(a[j]==0)
					{
						a[j]=1;
					}
					else
					{
						a[j]=0;
					}
				}
			}
		}
		for(j=1; j<=n; j++)
		{
			if(a[j]==1)
			{
				count++;
			}
		}
		for(j=1; j<=n; j++)
		{
			if(a[j]==1)
			{
				if(num<count-1)
				{
					cout<<j<<" ";
					num++;
				}
				else
				{
					cout<<j<<endl;
				}
			}
		}
		m=0;
		num=0;
		count=0;
		memset(a,0,sizeof(a));
	}
	return 0;
}

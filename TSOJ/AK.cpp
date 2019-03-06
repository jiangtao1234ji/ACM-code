#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n, i, time[1000];
	char result[1000], problem[1000];
	char b[10]="AC", c[10]="WA";
	int sum=0, a=0, d=0, j, count=0, num=0, m=0, e=0, f=0;
	while(cin>>n)
	{
		getchar();
		for(i=0; i<n; i++)
		{
			scanf("%c", &problem[i]);
			getchar();
			result[d]=getchar();
			d++;
			result[d]=getchar();
			d++;
			getchar();
			scanf("%d", &time[i]);
			getchar();
		}
		for(i=0; i<n; i++)
		{
			for(j=m; j<m+2; j++)
			{
				if(result[j]==c[0])
				{
					break;
				}
				else if(result[j]==b[0])
				{
					count++;
				}
				else if(result[j]==b[1])
				{
					count++;
				}
			}
			for(j=m; j<m+2; j++)
			{
				if(j==m)
				{
					if(result[j]==b[0])
					{
						break;
					}
				}
				if(result[j]==c[0])
				{
					num++;
				}
				else if(result[j]==c[1])
				{
					num++;
				}
			}
			if(problem[i]==problem[i+1])
			{
				if(e==0)
				{
					if(count==2)
					{
						sum+=time[i];
						count=0;
						e++;
					}
					if(num==2)
					{
						sum+=20;
						a++;
						num=0;
					}
				}
			}
			else
			{
				if(e==1)
				{
					sum+=0;
				}
				else
				{
					if(sum==2)
					{
						sum-=(a*20);
						a=0;
						num=0;
					}
					if(count==2)
					{
						sum+=time[i];
						count=0;
					}
				}
			}
			m+=2;
		}
		cout<<sum<<endl;
		sum=0;
		a=0;
		count=0;
		d=0;
		num=0;
		m=0;
		e=0;
	}
}

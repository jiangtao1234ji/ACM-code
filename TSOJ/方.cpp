#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, i, a[1000], b=0, temp, sum, j, count=1;
	while(cin>>n)
	{
		for(i=2; i*i<=n; i++)
		{
			if(i==2)
			{
				for(j=0; j<125; i++)
				{
					a[b]=i*i;
					b++;
				}
			}
			else if(i==3)
			{
				for(j=0; j<56; i++)
				{
					a[b]=i*i;
					b++;
				}
			}
			else if(i==4)
			{
				for(j=0; j<32; i++)
				{
					a[b]=i*i;
					b++;
				}
			}
			else if(i>=5)
			{
				for(j=0; j<20; i++)
				{
					a[b]=i*i;
					b++;
				}
			}
		}
		for(i=0; i<b; i++)
		{
			temp=i;
			sum=0;
			for(j=0; j<b; j++)
			{
				if(temp%2)
					sum+=a[j];
				temp=temp/2;
			}
			if(sum==n)
			{
				count++;
			}
		}
		cout<<count<<endl;
		count=1;
		b=0;
	}
}

#include <iostream>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		for(int i=0; i<n; i++)
		{
			cin>>t;
			int sum=0, maxx=0, maxxstart=1, maxxend=1;
			int a[10000];
			int count=0;
			for(int i=0; i<t; i++)
			{
				cin>>a[i];
				if(a[i]<0)
					count++;
			}
			int b;
			if(count==n)
			{
				int temp=a[0];
				for(int i=0; i<n; i++)
				{
					if(temp<a[i])
					{
						temp=a[i];
						b=i;
					}
				}
				cout<<temp<<" "<<b<<" "<<b<<endl;
			}
			else
			{
				for(int i=0; i<n; i++)
				{
					sum+=a[i];
					if(sum>=maxx)
					{

						maxx=sum;
					}
					else
					{
						i++;
						sum=a[i];
					}
				}
			}
			fun(t);
			cout<<maxx<<endl;
		}
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n, a, i, count=0, num=0;
	int b[1000];
	while(cin>>n)
	{
		for(i=0; i<n; i++)
		{
			cin>>b[i];
		}
		cin>>a;
		for(i=0; i<n; i++)
		{
			if(b[i]==a)
			{
				if(num==0)
				{
					cout<<i+1<<endl;
					num++;
				}

			}
			else
			{
				count++;
			}
		}
		if(count==n)
		{
			cout<<"-1"<<endl;
		}
		count=0;
		num=0;
	}
}

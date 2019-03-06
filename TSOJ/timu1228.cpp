#include<iostream>
using namespace std;
int judge(int a[],int m)
{
	int i, count=0;
	for(i=0; i<m; i++)
	{
		if(a[i]==0)
		{
			count++;
		}
	}
	if(count==m)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int m, i, j, count=0;
	int a[1000]= {0};
	while(cin>>m)
	{
		do
		{
			for(i=0; i<m; i++)
			{
				for(j=0; j<(i+1)/2; j++)
				{
					int t;
					t=a[j];
					a[j]=!a[i-j];
					a[i-j]=!t;
				}
				if((i+1)%2==1)
				{
					a[i/2]=!a[i/2];
				} 
				count++;
				if(judge(a,m))
				{
					break;
				}
			}
		}
		while(!judge(a,m));
		cout<<count<<endl;
		count=0;
	}
}

#include<iostream>
using namespace std;
int main()
{
	int n, i, j, t, count=0;
	int a[1000]={0};
	while(cin>>n)
	{
		for(i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(i=0; i<n; i++)
		{
			for(j=1; j<n; j++)
			{
				if(a[j-1]>a[j])
				{
					t=a[j-1];
					a[j-1]=a[j];
					a[j]=t;
					count++;
				}
			}
		}
		cout<<count<<endl;
		count=0;
	}
}

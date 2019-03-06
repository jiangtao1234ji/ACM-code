#include<iostream>
using namespace std;
int main()
{
	int n, i, c, d=0, j;
	int a[100000], b[100000];
	while(cin>>n)
	{
		for(i=0; i<n; i++)
		{
			cin>>a[i];
			while(a[i])
			{
				c=a[i]%6;
				a[i]/=6;
				d++;
				b[d]=c;
			}
			for(j=d; j>=1; j--)
			{
				if(j>1)
				{
					cout<<b[j];
				}
				else
				{
					cout<<b[j]<<endl;
				}
			}
			d=0;
		}
	}
}

#include<iostream>
using namespace std;
int main()
{
	int n, i, count=0;
	while(cin>>n)
	{
		for(i=1; i<=n; i++)
		{
			if(n%i==0)
			{
				count++;
			}
			
		}
		cout<<n-count<<endl;
		count=0;
	}
}

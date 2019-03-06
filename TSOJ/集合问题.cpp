#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		long long m[n];
		m[0]=1;
		m[1]=2;
		if(n==1)
			cout<<m[0]<<endl;
		else if(n==2)
			cout<<m[1]<<endl;
		else
		{
			for(int i=2; i<n; ++i)
			{
				m[i]=(m[i-1]+m[i-2]+1)%10000007;
			}
			cout<<m[n-1]<<endl;
		}
	}
	return 0;
}


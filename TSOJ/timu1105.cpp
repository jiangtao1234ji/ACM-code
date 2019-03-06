#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool sushu(int n)
{
	for(int i=2; i*i<n ; i++)
		if(n%i==0)
			return false;
	return true;
}
int main()
{
	int n, i, j;
	while(cin>>n)
	{
		for( i=n-1; i>1; i--)
		{
			for( j=2; j<n; j++)
			{
				if(sushu(i))
				{
					if(sushu(j))
						if(i+j==n)
						{
							cout<<j<<"+"<<i<<endl;
							break;
						}
				}
			}
			if(i+j==n)
				break;
		}
	}
	return 0;
}


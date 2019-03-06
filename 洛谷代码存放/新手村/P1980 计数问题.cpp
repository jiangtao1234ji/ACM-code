#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n,x, count=0;
	cin>>n>>x;
	for(int i=1; i<=n; ++i)
	{
		int k = i;
		while(k)
		{
			int c = k%10;
			k /= 10;
			if(c == x)
				count++;
		}
	}
	cout<<count<<endl;
	return 0;
}


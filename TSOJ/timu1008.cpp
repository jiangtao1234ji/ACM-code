#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int count = 0;
		for(int i=2; i*i<=n; ++i)
		{
			if(n%i == 0)
			{
				cout<<"No"<<endl;
				count++;
				break;
			}
		}
		if(count == 0)
			cout<<"Yes"<<endl;
	}
	return 0;
}


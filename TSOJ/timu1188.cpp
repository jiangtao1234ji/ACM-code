#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int count=0;
		for(int i=3; i<1000000; i++)
		{
			if(i%3==0||i%5==0)
				count++;
			if(count==n)
			{
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}


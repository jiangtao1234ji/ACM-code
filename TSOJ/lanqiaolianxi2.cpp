#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int sum=0, a=0;
	for(int j=1; j<99; j++)
	{
		a=j;
		for(int i=j; i<99; i++)
		{
			sum+=i;
			if(sum<236)
				continue;
			else if(sum==236)
				cout<<i<<" "<<a<<endl;
			else
				break;
		}
		sum=0;
	}
	return 0;
}


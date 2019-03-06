#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a, b, c, d;
	for(int i=1; i<=4; i++)
	{
		int x=(i!=1)+(i==3)+(i==4)+(i!=4);
		if(x==3)
		{
			cout<<x;
		}
	}
	return 0;
}


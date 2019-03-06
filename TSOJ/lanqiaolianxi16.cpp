#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a={0,1,2,3,4};
	int z={5,6,7,8,9};
	int sum=0;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<5; j++)
		{
			for(int n=0; n<5; n++)
			{
				sum=a[i]*100+z[j]*10+a[i];
			}
		}
	}
	return 0;
}


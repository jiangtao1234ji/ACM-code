#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int getMaxSqrt(int x)
{
	float s = sqrt((double)x);
	int a = floor(s);
	return a;
}

void Test(int n)
{
	int temp = n; 
	vector<int> ar;
	vector<vector<int> > arr;
	int maxSqrt = getMaxSqrt(n);
	int sum = 0;
	int  j = 0;
	int MaxSqrt = maxSqrt;
	int count=0;
	for(int i = maxSqrt; i > 0; i--)
	{
		while(temp > 0)
		{

			ar.push_back(maxSqrt * maxSqrt);
			temp -= maxSqrt * maxSqrt;
			maxSqrt = getMaxSqrt(temp);
			count++;
		}
		cout<<count<<endl;
		arr.push_back(ar);
		ar.clear();
		maxSqrt = --MaxSqrt;
		temp = n;
	}
}

int main()
{
	int n;
	while(cin>>n)
	{
		Test(n);
	}

	return 0;
}

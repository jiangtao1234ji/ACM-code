#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

void fun(double *num)
{
	num[0] = 0;
	num[1] = 1;
	num[2] = 3;
	for(int i = 3; i <= 64; i++)
	{
		double min = 10000000;
		double tmp;
		for(int k = 1; k < i; k++)
		{
			tmp = 2 * num[k] + pow(2,i - k) - 1;
			if(tmp < min)
				min = tmp;
		}
		num[i] = min;
	}
}

int main()
{
	double num[70];
	int n;
	fun(num);
	while(cin>>n)
	{
		cout << num[n] << endl;
	}
	return 0;
}


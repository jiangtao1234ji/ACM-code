#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	string a;
	cin>>a;
	int len = a.length();
	int count = 0;
	int is3 = 0, is5 = 0, is8 = 0, is11 = 0;
	if(a[len-1] == '5' || a[len-1] == '0')
	{
		is5 = 1;
		count++;
	}
	long long sum = 0;
	long long sum1 = 0, sum2 = 0;
	for(int i=0; i<len; i++)
	{
		sum+=(a[i]-'0');
	}
	if(sum%3 == 0)
	{
		is3 = 1;
		count++;
	}
	int temp = 0;
	temp = (a[len-1]-'0')+(a[len-2]-'0')*10+(a[len-3]-'0')*100;
	if(temp%8 == 0)
	{
		is8 = 1;
		count++;
	}

	return 0;
}


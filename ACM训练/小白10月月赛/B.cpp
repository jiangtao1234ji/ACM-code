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
	long long sum = 0, sum1 = 0, sum2 = 0;
	for(int i=0; i<len; i++)
	{
		sum+=(a[i]-'0');
		if(i%2==0)
			sum2+=(a[i]-'0');
		else
			sum1+=(a[i]-'0');
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
	if(abs(sum1-sum2)%11 == 0)
	{
		is11 = 1;
		count++;
	}
	if(count > 0)
	{
		cout<<"Yes"<<endl;
		if(is3)
			cout<<"3 ";
		if(is5)
			cout<<"5 ";
		if(is8)
			cout<<"8 ";
		if(is11)
			cout<<"11 ";
	}
	else
		cout<<"No"<<endl;
	return 0;
}


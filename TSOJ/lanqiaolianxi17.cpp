#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

long long GCD(long long num1,long long num2)
{
	if(num1%num2==0)
		return num2;
	else return  GCD(num2,num1%num2);
}
long long LCM(long long a,long long b)
{
	long long temp_lcm;  
	temp_lcm=a*b/GCD(a,b);
	return temp_lcm;
}
int main()
{
	int n;
	while(cin>>n)
	{
		long long a=1;
		for(int i=2; i<=n; i++)
		{
			a=LCM(a,i);
			cout<<a<<" ";
		}
	}
	return 0;
}


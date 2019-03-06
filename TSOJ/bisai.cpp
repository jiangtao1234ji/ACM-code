#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int GCD(int num1,int num2)
{
	if(num1%num2==0)
		return num2;
	else return  GCD(num2,num1%num2);
}
int LCM(int a,int b)
{
	int temp_lcm;
	temp_lcm=a*b/GCD(a,b);
	return temp_lcm;
}
int main()
{
	int a, b, c, lcm, ans;
	while(cin>>a>>b>>c)
	{
		lcm=LCM(a,b);
		ans=LCM(lcm,c);
		cout<<ans<<endl;
	}
	return 0;
}


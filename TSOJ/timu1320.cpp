#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void fun(int n)
{
	int a[10000]= {0}, temp, c=0, num1=0, num2=0;
	while(n)
	{
		temp=n%2;
		a[c++]=temp;
		n/=2;
	}
	for(int i=0; i<c; i++)
	{
		if(a[i]==1)
			num1++;
	}
	for(int i=0; i<c; i++)
	{
		if(a[i]==1)
		{
			if(i==0||i==2)
				cout<<"2("<<i<<")";
			else if(i==1)
				cout<<"2";
			else
			{
				cout<<"2(";
				fun(i);
				cout<<")";
			}
			num2++;
			if(num2<num1)
				cout<<"+";
		}
	}
}
int main()
{
	int n;
	while(cin>>n)
	{
		fun(n);
		cout<<endl;
	}
	return 0;
}


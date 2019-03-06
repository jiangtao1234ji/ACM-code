#include<iostream>
using namespace std;
int fun(int b)
{
	if(b==1)
	{
		return 1;
	}
	return (fun(b-1)+1)*2;
} 
int main()
{
	int n, a;
	while(cin>>n)
	{
		a=fun(n); 
		cout<<a<<endl;
	}
	return 0;
}

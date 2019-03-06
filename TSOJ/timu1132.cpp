#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		long long a;
		a=pow(10,n)-pow(9,n);
		cout<<a<<endl;
	}
	return 0;
}

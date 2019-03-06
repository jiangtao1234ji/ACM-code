#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, n;
	long long c;
	while(cin>>a>>b>>n)
	{
		c=pow(a,b);
		cout<<c%n<<endl;
	}
}

#include<iostream>
using namespace std;
int main()
{
	int m;
	while(cin>>m)
	{
		m++;
		cout<<(m*(m-1)/2+1)<<endl;
	}
	return 0;
}

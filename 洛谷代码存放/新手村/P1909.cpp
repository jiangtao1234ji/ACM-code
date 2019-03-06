#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int num;
	cin>>num;
	int a, b, ans = 100000000, c;
	for(int i=0; i<3; ++i)
	{
		cin>>a>>b;
		c = ceil(num*1.0/a)*b;
		ans = min(c, ans);
	}
	cout<<ans<<endl;
	return 0;
}


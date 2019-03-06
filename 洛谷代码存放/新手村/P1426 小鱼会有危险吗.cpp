#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

const double M = 0.98;

using namespace std;

int main()
{
	int s, x;
	cin>>s>>x;
	double sum = 0, v = 7;
	while(sum <= s-x)
	{
		sum+=v;
		v*=M;
	}
	if(x+s-sum  < v)
		cout<<"n"<<endl;
	else
		cout<<"y"<<endl;
	return 0;
}


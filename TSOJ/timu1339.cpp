#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun1(int m1, int m2, int v0)
{
	int v1;
	v1=(m1*m1*v0-m1*m2*v0)/(m1*m1+m1*m2);
	return v1;
}
int fun2(int m1, int m2, int v0)
{
	int v2;
	v2=2*m1*m2*v0/(m2*m2+m1*m2);
	return v2;
}
int main()
{
	int m1, m2, v0;
	while(cin>>m1>>m2>>v0)
	{
		cout<<fun1(m1,m2,v0)<<" "<<fun2(m1,m2,v0)<<endl;
	}
	return 0;
}


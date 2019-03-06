#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a[5];
	int d;
	for(int i=10000; i<100000; i++)
	{
		d=i;
		a[0]=d%10;
		d/=10;
		a[1]=d%10;
		d/=10;
		a[2]=d%10;
		d/=10;
		a[3]=d%10;
		d/=10;
		if(a[0]==a[3]&&a[1]==a[2])
			cout<<i<<endl;
	}
	return 0;
}


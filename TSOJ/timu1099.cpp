#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void fun(int x, int count)
{
	int p[4], maxx, minx;
	p[0]=x / 1000;
	p[1]= x % 1000 / 100;
	p[2]= x % 100 / 10;
	p[3]= x % 10;
	sort(p,p+4);
	maxx=p[3]*1000+p[2]*100+p[1]*10+p[0];
	if(p[0]==0)
		minx=p[1]*100+p[2]*10+p[3];
	else
		minx=p[0]*1000+p[1]*100+p[2]*10+p[3];
	if(maxx-minx==6174)
		cout<<count<<endl;
	else
	{
		count++;
		fun(maxx-minx,count);
	}
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==6174)
			cout<<"0"<<endl;
		else
			fun(n,1);
	}
	return 0;
}


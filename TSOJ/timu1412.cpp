#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, a1, b1;
	while(cin>>n>>a1>>b1)
	{
		int x=b1,y=a1;
		int a=n/2;
		if(n%2==0)
		{
			if(x>a)
				x=1+(n-x);
			if(y>a)
				y=1+(n-y);
		}
		else
		{
			if(x>a+1)
				x=1+(n-x);
			if(y>a+1)
				y=1+(n-y);
		}
		int ceng=x<y?x:y;
		x=1;
		y=1;
		int p=1;
		for(int m=1; m<ceng; m++)
		{
			p+=4*(n-1);
			n-=2;
			x++;
			y++;
		}

		if(y==a1)
		{
			p+=b1-x;
			cout<<p<<endl;
			continue;
		}
		p+=n-1;
		x+=n-1;
		if(x==b1)
		{
			p+=a1-y;
			cout<<p<<endl;
			continue;
		}
		p+=n-1;
		y+=n-1;
		if(y==a1)
		{
			p+=x-b1;
			cout<<p<<endl;
			continue;
		}
		p+=n-1;
		x-=n-1;
		if(x==b1)
		{
			p+=y-a1;
			cout<<p<<endl;
			continue;
		}
	}
	return 0;
}


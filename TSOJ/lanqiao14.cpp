#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int a[1000], num=0;
		if(n<16)
		{
			if(n==10)
				cout<<"A"<<endl;
			if(n==11)
				cout<<"B"<<endl;
			if(n==12)
				cout<<"C"<<endl;
			if(n==13)
				cout<<"D"<<endl;
			if(n==14)
				cout<<"E"<<endl;
			if(n==15)
				cout<<"F"<<endl;
			if(n<10)
				cout<<n<<endl;
		}
		else
		{
			while(n)
			{
				a[num++]=n%16;
				n/=16;
			}
			for(int i=num-1; i>=0; i--)
			{
				if(a[i]==10)
					cout<<"A";
				if(a[i]==11)
					cout<<"B";
				if(a[i]==12)
					cout<<"C";
				if(a[i]==13)
					cout<<"D";
				if(a[i]==14)
					cout<<"E";
				if(a[i]==15)
					cout<<"F";
				if(a[i]<10)
					cout<<a[i];
			}
			cout<<endl;
		}
	}
	return 0;
}


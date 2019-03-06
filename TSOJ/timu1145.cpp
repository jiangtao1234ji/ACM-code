#include<iostream>
#include<string>
#include<algorithm>
#define N 10005

using namespace std;

int main()
{
	string a;
	string b;
	char c[N]= {'0'};
	while(cin>>a)
	{
		b=a;
		int k=a.size();
		int num=0;
		for(int i=k-1; i>1; --i)
		{
			int m=a[i]-'0';
			int j=0;
			for (; (j < num )|| m; ++j )
			{
				int temp = m*10 + (j < num ? c[j] - '0' :0 );
				c[j] = temp/8 + '0';
				m = temp%8;
			}
			num = j;
		}
		for(int i=0; i<b.size(); ++i)
			cout<<b[i];
		cout<<"[8]=";
		cout<<"0.";
		for(int i=0; i<num; ++i)
		{
			if(i<num-1)
				cout<<c[i];
			else
				cout<<c[i]<<"[10]"<<endl;
		}
	}
	return 0;
}


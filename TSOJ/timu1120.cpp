#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	string a;
	string b;
	int d[201]={0};
	while(cin>>a>>b)
	{
		int lena=a.size();
		int lenb=b.size();
		if(lena>lenb)
		{
			int c=lena-lenb;
			for(int i=c; i<a.size(); i++)
			{
				d[i]=a[i]-'0'+b[i-c]-'0';
				if(d[i]>=10)
				{
					d[i-1]++;
					d[i]%=10;
				}
			}
			for(int i=0; i<c; i++)
				d[i]=a[i]-'0';
			for(int i=0; i<a.size(); i++)
				cout<<d[i];
			cout<<endl;
		}
		if(lena<lenb)
		{
			int c=lenb-lena;
			for(int i=c; i<b.size(); i++)
			{
				d[i]=b[i]-'0'+a[i-c]-'0';
				if(d[i]>=10)
				{
					d[i-1]++;
					d[i]%=10;
				}
			}
			for(int i=0; i<c; i++)
				d[i]=b[i]-'0';
			for(int i=0; i<a.size(); i++)
				cout<<d[i];
			cout<<endl;
		}
		if(lena==lenb)
		{
			for(int i=0; i<b.size(); i++)
			{
				d[i+1]=b[i]-'0'+a[i]-'0';
				if(d[i]>=10)
				{
					d[i-1]++;
					d[i]%=10;
				}
			}
			if(d[0]!=0)
				cout<<d[0];
			for(int i=1; i<a.size()+1; i++)
				cout<<d[i];
			cout<<endl;
		}
	}
	return 0;
}


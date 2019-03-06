#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	string a;
	string b;
	int d[201]= {0};
	while(cin>>a>>b)
	{
		int lena=a.size();
		int lenb=b.size();
		if(lena>lenb)
		{
			int c=lena-lenb;
			for(int i=c; i<a.size(); i++)
			{
				d[i]=(a[i]-'0')-(b[i-c]-'0');
				if(d[i]<0)
				{
					d[i-1]--;
					d[i]+=10;
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
			swap(a,b);
			int c=lena-lenb;
			for(int i=c; i<a.size(); i++)
			{
				d[i]=(a[i]-'0')-(b[i-c]-'0');
				if(d[i]<0)
				{
					d[i-1]--;
					d[i]+=10;
				}
			}
			for(int i=0; i<c; i++)
				d[i]=a[i]-'0';
			cout<<"-";
			for(int i=0; i<a.size(); i++)
				cout<<d[i];
			cout<<endl;
		}
		if(lena==lenb)
		{
			if(a<b)
			{
				swap(a,b);
				for(int i=0; i<a.size(); i++)
				{
					d[i]=(a[i]-'0')-(b[i]-'0');
					if(d[i]<0)
					{
						d[i-1]--;
						d[i]+=10;
					}
				}
				cout<<"-";
				for(int i=0; i<a.size(); i++)
					cout<<d[i];
				cout<<endl;
			}
			else
			{
				for(int i=0; i<a.size(); i++)
				{
					d[i]=(a[i]-'0')-(b[i]-'0');
					if(d[i]<0)
					{
						d[i-1]--;
						d[i]+=10;
					}
				}
				for(int i=0; i<a.size(); i++)
					cout<<d[i];
				cout<<endl;
			}
		}
	}
	return 0;
}

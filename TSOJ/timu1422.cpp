#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int c[600000]= {0};

int main()
{
	string a;
	string b;
	int x, y;
	while(cin>>a>>b)
	{
		if(a.size()<b.size())
		{
			for(int i=0; i<a.size(); i++)
			{
				x=0;
				for(int j=0; j<b.size(); j++)
				{
					y = c[j];
					if(a[i] == 'A'&& b[j] == 'T'||a[i] == 'T'&& b[j] == 'A')
						c[j] = x+1;
					else if(a[i] == 'A'&& b[j] == 'U')
						c[j] = x+1;
					else if(a[i] == 'C'&& b[j] == 'G'||a[i] == 'G'&& b[j] == 'C')
						c[j] = x+1;
					else if(c[j-1]>c[j])
						c[j]=c[j-1];
					x = y;
				}
			}
			cout<<a.size()-c[b.size()-1]<<endl;
			cout<<b.size()-c[b.size()-1]<<endl;
		}
		else if(a.size()>=b.size())
		{
			for(int i=0; i<b.size(); i++)
			{
				x=0;
				for(int j=0; j<a.size(); j++)
				{
					y = c[j];
					if(a[i] == 'A'&& b[j] == 'T'||a[i] == 'T'&& b[j] == 'A')
						c[j] = x+1;
					else if(a[i] == 'A'&& b[j] == 'U')
						c[j] = x+1;
					else if(a[i] == 'C'&& b[j] == 'G'||a[i] == 'G'&& b[j] == 'C')
						c[j] = x+1;
					else if(c[j-1]>c[j])
						c[j]=c[j-1];
					x = y;
				}
			}
			cout<<a.size()-c[a.size()-1]<<endl;
			cout<<b.size()-c[a.size()-1]<<endl;
		}
		memset(c,0,sizeof(c));
	}
	return 0;
}


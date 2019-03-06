#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n;
	char a[1000]= {0};
	char b[1000]= {0};
	while(cin>>n)
	{
		for(int i=0; i<n; i++)
		{
			for(int i=0; ; i++)
			{
				if(a[i]=='\n')
					break;
				cin>>a[i];
			}
			int c, d=0;
			c=strlen(a);
			for(int i=0; i<c-2; i++)
			{
				b[d++]=a[i+2];
			}
			b[d++]=a[1];
			b[d]=a[0];
			int count=0;
			for(int i=0; i<c; i++)
			{
				if(a[i]==b[i])
					count++;
			}
			if(count==c)
				cout<<"NO"<<endl;
			else
			{
				for(int i=0; i<c; i++)
				{
					cout<<b[i];
					if(i==c-1)
						cout<<b[i]<<endl;
				}
			}
		}

	}
	return 0;
}


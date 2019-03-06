#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		char a[1000];
		char b[1000];
		char c[1000];
		getchar();
		while(n--)
		{
			int count=0;
			int num=0;
			for(int i=0; ; i++)
			{
				scanf("%c",&a[i]);
				if(a[i]==' ')
					continue;
				if(a[i]=='\n')
					break;
				else
					b[num++]=a[i];
			}
			for(int i=num-1, j=0; i>=0, j<num; --i, ++j)
			{
				c[j]=b[i];
			}
			for(int i=0; i<num; ++i)
			{
				if(c[i]==b[i])
					count++;
			}
			if(count==num)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
	}
	return 0;
}


#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	int a[305];
	int b[305];
	int c[305];
	while(cin>>n)
	{
		getchar();
		if(n==0)
			break;
		int k=0;
		for(int i=0; i<2*n-1; i++)
		{
			char d=cin.peek();
			if(d!=' ')
				cin>>a[k++];
			else
				getchar();
		}
		getchar();
		k=0;
		for(int i=0; i<2*n-1; i++)
		{
			char d=cin.peek();
			if(d!=' ')
				cin>>b[k++];
			else
				getchar();
		}
		getchar();
		k=0;
		for(int i=0; i<2*n-1; i++)
		{
			char d=cin.peek();
			if(d!=' ')
				cin>>c[k++];
			else
				getchar();
		}
		getchar();
		int num[305];
		memset(num,0,sizeof(num));
		for(int i=0; i<n; i++)
		{
			num[a[i]]++;
			num[b[i]]++;
			num[c[i]]++;
		}
		int f[305];
		int l=0;
		for(int i=0; i<305; i++)
			if(num[i]==3)
				f[l++]=i;
		for(int i=0; i<l; i++)
			if(i<l-1)
				cout<<f[i]<<" ";
			else
				cout<<f[i]<<endl;
	}
	return 0;
}


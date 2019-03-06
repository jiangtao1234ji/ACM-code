#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int n, m;
	int f[10000];
	while(cin>>n>>m)
	{
		int k=0;
		for(int i=1;; i++)
		{
			int a=pow(2,i);
			if(a<=n)
			{
				f[k]=a;
				k++;
			}
			int b=pow(3,i);
			if(a<=n)
			{
				f[k]=b;
				k++;
			}
			int c=i*6;
			if(a<=n)
			{
				f[k]=c;
				k++;
			}
			if(c>n)
				break;
		}
		cout<<k+1<<endl;
		cout<<f[m-2]<<endl;
	}
	return 0;
}


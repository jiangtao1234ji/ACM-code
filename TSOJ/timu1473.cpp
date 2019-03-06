#include<iostream>
#include<string>
#include<algorithm>
#define maxn 1000000000

using namespace std;

int main()
{
	int p, q;
	int f[1000];
	while(cin>>p>>q)
	{
		if(p==1 && q%p==0)
			cout<<q<<"/"<<p<<endl;
		else if(q%p==0)
			cout<<1<<"/"<<q/p<<endl;
		else
		{
			int k=0, t=0, n=q;
			while(1)
			{
				int c=q/p+1;
				if(c>maxn || c<0)
				{
					t=1;
					break;
				}
				if(c==n)
					c++;
				k++;
				f[k]=c;
				p=p*c-q;
				q*=c;
				for(int i=2; i<=p; i++)
					while(p%i==0&&q%i==0)
					{
						p/=i;
						q/=i;
					}
				if(p==1&&q!=n)
				{
					k++;
					f[k]=q;
					break;
				}
			}
			if(t==0)
			{
				cout<<"1/"<<f[1];
				for(int i=2; i<=k; ++i)
					cout<<"+1/"<<f[i];
				cout<<endl;
			}
			else
				cout<<"No found!"<<endl;

		}
	}
	return 0;
}


#include<iostream>
#include<string>
#include<algorithm>
#define maxn 100010

using namespace std;

int a[maxn];

int main()
{
	int n;
	while(cin>>n)
	{
		int sum=0;
		while(n--)
		{
			int hp, k;
			cin>>hp;
			cin>>k;
			for(int i=0; i<k; ++i)
			{
				cin>>a[i];
			}
			for(int i=0; i<=k-2; ++i)
			{
				if(i == 0)
				{
					if(a[i] < a[i+1])
					{
						sum+=a[i];
						if(sum > hp)
						{
							cout<<"Can't get the top!"<<endl;
							break;
						}
					}
					else
					{
						sum+=a[i+1];
						if(sum > hp)
						{
							cout<<"Can't get the top!"<<endl;
							break;
						}
					}
				}
				else
				{
					if(a[i+1] < a[i+2])
					{
						sum+=a[i+1];
						if(sum > hp)
						{
							cout<<"Can't get the top!"<<endl;
							break;
						}
					}
					else
					{
						sum+=a[i+2];
						if(sum > hp)
						{
							cout<<"Can't get the top!"<<endl;
							break;
						}
					}
				}
			}
			cout<<hp-sum<<endl;
		}
	}
	return 0;
}


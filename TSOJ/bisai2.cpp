#include<iostream>
#include<algorithm>

using namespace std;

int p[9];
int  cnt[1000005];
int main()
{
	int n;
	cin>>n;
	for(int i=0; i<9; i++)
		p[i]=i+1;
	int a,b,c,ans;
	do
	{
		for(int i=0; i<=6; i++)
			for(int j=i+1; j<=7; j++)
			{
				a=0;
				b=0;
				c=0;
				ans=0;
				for(int k=0; k<=i; k++)
				{
					a=a*10+p[k];
				}
				for(int k=i+1; k<=j; k++)
				{
					b=b*10+p[k];
				}
				for(int k=j+1; k<=8; k++)
				{
					c=c*10+p[k];
				}
				if(b%c==0)
				{
					ans=a+b/c;
					if(ans<1000000)
						cnt[ans]++;
				}
			}
	}
	while(next_permutation(p,p+9));
	cout<<cnt[n];
}

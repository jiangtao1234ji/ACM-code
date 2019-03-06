#include <iostream>
using namespace std;
int main()
{
	int k,n,flag,a[31];
	while(cin>>n)
	{
		flag=(n>0)?1:(-1);
		if(n<0) n=-n; 
		k=0;
		while(n>0)
		{
			if(flag>0)
			{
				if(n%2==0)
					a[k++]=0;
				else
					a[k++]=1;
				n/=2;
			}
			else 
			{
				if(n%2==0)
				{
					n/=2;
					a[k++]=0;
				}
				else
				{
					n=(n+1)/2;
					a[k++]=1;
				}
			} 
			flag=-flag;
		}
		for(k=k-1; k>=0; k--)
			if(a[k]==1)
				cout<<k<<" ";
		cout<<endl;
	}
	return 0;
}

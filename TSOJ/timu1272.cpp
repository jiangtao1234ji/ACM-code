#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	long n, m;
	while(cin>>m>>n)
	{
		long sum=0;
		long charge[n], num[n];
		for(int i=0; i<n; i++)
		{
			cin>>charge[i]>>num[i];
		}
		for(int i=0; i<n; i++)
		{
			int temp=num[i];
			int temp1=charge[i];
			int iPos=i;
			for(int j=i+1; j<n; j++)
			{
				if(charge[j]<temp1)
				{
					temp1=charge[j];
					temp=num[j];
					iPos=j;
				}
			}
			charge[iPos]=charge[i];
			charge[i]=temp1;
			num[iPos]=num[i];
			num[i]=temp;
		}
		long a;
		for(int i=0; i<n; i++)
		{
			if(m-num[i]>=0)
			{
				sum+=num[i]*charge[i];
				m-=num[i];
			}
			else
			{
				sum+=m*charge[i];
				break;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}


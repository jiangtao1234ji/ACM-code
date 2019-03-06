#include<iostream>
using namespace std;
int main()
{
	int n, i, j=0, count=0, sum;
	int a[1000]={0};
	while(cin>>n)
	{
		for(i=2; i*i<n; i++)
		{
			if(n%i==0)
			{
				a[j]=i;
				a[j+1]=n/i;
				j+=2;
				count+=2;
			}
		}
		sum=1+n;
		for(i=0; i<count; i++)
		{
			sum+=a[i];
		}
		cout << sum <<endl;
		sum=0;
		count=0;
		j=0;
	}
	return 0;
}

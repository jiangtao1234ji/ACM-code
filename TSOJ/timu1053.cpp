#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int a[100]={0};
		int b[100]={0};
		int i=0, count=0;
		while(n)
		{
			a[i]=(n%10);
			i++;
			n/=10;
		}
		
		for(int j=0; j<i; j++)
		{
			b[j]=a[i-j-1];
		}
		for(int j=0; j<i; j++)
		{
			if(a[j]==b[j])
				count++;
		}
		if(count==i)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}


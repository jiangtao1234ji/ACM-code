#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	string a, b;
	while(cin>>n>>m)
	{
		int i, j;
		cin>>a>>b;
		int flag=0;
		int p=-1;
		for(i=0; i<a.size(); i++)
		{
			if(a[i]=='*')
			{
				p=i;
				break;
			}
			else
			{
				if(a[i]!=b[i])
					flag=1;
			}
			if(flag==1) 
				break;
		}
		for(i=n-1,j=m-1; i>p; i--,j--)
		{
			if(a[i]!=b[j]) flag=1;
			if(flag==1) break;
		}
		if(p==-1)
		{
			if(n!=m) 
				flag=1;
		}
		else if(n-m>1) 
			flag=1;
		if(flag==0) 
			cout<<"YES";
		else 
			cout<<"NO";
		cout<<endl;
	}
	return 0;
}


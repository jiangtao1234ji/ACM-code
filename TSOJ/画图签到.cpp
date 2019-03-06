#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		cout<<n<<":"<<endl;
		int k=1, m=0;
		while(n--)
		{
			m=k;
			while(1)
			{
				if(m!=0)
				{
					cout<<"*";
					m--;
				}
				if(m!=0)
				{
					cout<<"-";
					m--;
				}
				if(m==0)
				{
					cout<<endl;
					break;
				}
			}
			k++;
		}
	}
	return 0;
}


#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int l,r;
	while(cin>>l>>r)
	{
		int count=0;
		for(int i=l; i<=r; i++)
		{
			if(l%3==2)
				count++;
			if(l%3==0)
				count++;
			if((l-1)%3==2)
				k--;
			cout<<k<<endl;
		}
	}
	return 0;
}

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int k;
	while(cin>>k)
	{
		int n[k], m[k];
		for(int i=0; i<k; ++i)
			cin>>n[i]>>m[i];
		for(int i=0; i<k; ++i)
		{
			if(m[i] == 0 || n[i] == 0)
			{
				cout<<"0"<<" "<<"0"<<endl;
				continue;
			}
			if(m[i] == n[i])
			{
				cout<<m[i]<<" "<<m[i]<<endl;
				continue;
			}
			int temp = n[i]-m[i];
			if(m[i]%(temp+1)==0)
				cout<<m[i]<<" "<<m[i]/(n[i]-m[i]+1)<<endl;
			else
				cout<<m[i]<<" "<<m[i]/(temp+1)+1<<endl;
			
		}

	}
	return 0;
}


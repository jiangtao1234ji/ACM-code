#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int t,m;
	while(cin>>t>>m)
	{
		int res[1000]= {0}, time, value;
		for(int i=1; i<=m; i++)
		{
			cin>>time>>value;
			for(int j=time; j>=time; j--)
				res[j]=max(res[j],res[j-time]+value);
		}
		cout<<res[t]<<endl;
	}
	return 0;
}


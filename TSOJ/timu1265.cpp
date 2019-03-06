# include <iostream>
# include <cmath>
const double PI = 3.14159265 ;

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0; i<n; i++)
		{

			int len=ceil((N*log((double)N)-N+log(2.0*(double)N*PI)/2.0)/log(10.0));
			if(!len)len++;
			cout<<len<<endl;
		}
	}
	return 0;
}

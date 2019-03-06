#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	int n;
	cin>>n;
	int ans = 0, maxa = 0, count = 0;
	int a;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		if(maxa >= a)
		{
			maxa = a;
			if(count > ans)
				ans = count;
			count = 1;
		}
		else
		{
			maxa = a;
			count++;
		}
	}
	cout<<ans<<endl;
	
	return 0;
}


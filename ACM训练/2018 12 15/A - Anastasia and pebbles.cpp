#include<iostream>
#include<string>
#include<algorithm>
#define maxn 100100

using namespace std;

int main()
{
	int n, k, x;
	long long sum = 0;
	cin>>n>>k;
	for(int i=1; i<=n; i++)
	{
		cin>>x;
		sum+=(x+k-1)/k;
	}
	cout<<(sum+1)/2<<endl;
	return 0;
}


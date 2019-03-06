#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	int n;
	cin>>n;
	int i = 0, j = 0;
	while(n > j)
	{
		i++;
		j+=i;
	}
	if(i%2)
		cout<<j-n+1<<"/"<<i+n-j<<endl;
	else
		cout<<i+n-j<<"/"<<j-n+1<<endl;
	return 0;
}


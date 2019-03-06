#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int i=0, a[105];
	do
	{
		cin>>a[++i];
	}
	while(a[i]!=0);
	for(int j=i-1; j>=1; j--)
		cout<<a[j]<<" ";
	cout<<endl;
	return 0;
}


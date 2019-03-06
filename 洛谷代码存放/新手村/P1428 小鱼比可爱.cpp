#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int a[105], b[105];

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<
	n; i++)
		cin>>a[i];
	for(int i=0; i<n; i++)
	{
		int count = 0;
		for(int j=0; j<i; j++)
		{
			if(a[j] < a[i])
				count++;
		}
		b[i] = count;
	}
	for(int i=0; i<n; i++)
		cout<<b[i]<<" ";
	cout<<endl;
	return 0;
}


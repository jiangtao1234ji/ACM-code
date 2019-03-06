#include<iostream>
#include<string>
#include<algorithm>
# define maxn 110
using namespace std;

int main()
{
	int a[maxn], count=0, b;
	for(int i=0; i<10; ++i)
		cin>>a[i];
	cin>>b;
	for(int i=0; i<10; ++i)
	{
		if(b+30 >= a[i])
			count++;
	}
	cout<<count<<endl;

	return 0;
}


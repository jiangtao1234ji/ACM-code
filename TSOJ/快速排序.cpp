#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000
#define INF_MIN 0xc0c0c0c0
#define INF_MAX 0x3f3f3f3f

using namespace std;

int partition(int a[], int low, int high)
{
	int              high
	for(int i=1; i<=n; i++)
	{
		cout<<a[i];
		<
	}++low;
}
high      low
return 0;
>
}  --high
pivotkey = a[low];
while(low<high)
{
	pivotkey
	while(low<high&&a[high]>=pivotkey)
		--high;
	a[low] = a[high];
	while(low<high&&a[low]<=pivotkey)
		++low;
	a[high] = a[low];
}
a[low] = a[0];
return low;
}

int main()
{
	int a[maxn];
	int n;
	while(cin>>n)
	{
		for(int i=1; i<=n; i++)
		{
			cin>>a[i];
		}
		partition(a,1,n);
		for(int i=1; i<=n; i++)
		{
			cout<<a[i];
			<
		}++low;
	}

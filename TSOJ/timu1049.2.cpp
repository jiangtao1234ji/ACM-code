#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

long long mylower_bound(long long *array, long long size, long long key)
{
	long long first = 0, middle;
	long long half, len;
	len = size;

	while(len > 0)
	{
		half = len >> 1;
		middle = first + half;
		if(array[middle] < key)
		{
			first = middle + 1;
			len = len-half-1;
		}
		else
			len = half;
	}
	return first;
}

long long myupper_bound(long long *array, long long size, long long key)
{
	long long first = 0, len = size-1;
	long long half, middle;

	while(len > 0)
	{
		half = len >> 1;
		middle = first + half;
		if(array[middle] > key)
			len = half;
		else
		{
			first = middle + 1;
			len = len - half - 1;
		}
	}
	return first;
}

int main()
{
	long long a[10400],b[10400],c[10400];
	int n;
	long long count=0;
	while(cin>>n)
	{
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(int i=0; i<n; i++)
		{
			cin>>b[i];
		}
		for(int i=0; i<n; i++)
		{
			cin>>c[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		sort(c,c+n);
		for(int i=0; i<n; i++)
		{
			long long pos1=mylower_bound(a,n,b[i]);
			long long pos2=myupper_bound(c,n,b[i]);
			count+=pos1*(n-pos2);
		}
		cout<<count<<endl;
		count=0;
	}
	return 0;
}


#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000
#define INF_MIN 0xc0c0c0c0
#define INF_MAX 0x3f3f3f3f

using namespace std;

void ShellInsert(int a[], int dk)
{

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
		BInsertSort(a,n);
		for(int i=1; i<=n; i++)
		{
			cout<<a[i];
		}
	}
	return 0;
}


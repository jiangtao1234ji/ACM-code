#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000
#define INF_MIN 0xc0c0c0c0
#define INF_MAX 0x3f3f3f3f

using namespace std;


void InsertSort(int a[])
{
	int lena = strlen(a);
	for(int i=2; i<lena; ++i)
	{
		if(a[i]<a[i-1])
		{
			a[0] = a[i];
		}
	}
}

int main()
{

	return 0;
}


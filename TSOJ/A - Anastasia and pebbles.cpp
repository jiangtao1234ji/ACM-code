#include<iostream>
#include<string>
#include<algorithm>
#define maxn 100100

using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	for(int i=1; i<=n; i++)
	{

		cin>>x;
		sum+=(x+k-1)/k;    //���һ���ڴ������ž���Ҫ�ټ�һ���ڴ����������ȡ��

		cout<<(sum+1)/2<<endl;
	}
	return 0;
}

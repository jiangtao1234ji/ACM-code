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
		sum+=(x+k-1)/k;    //如果一个口袋不够放就需要再加一个口袋，结果向上取整

		cout<<(sum+1)/2<<endl;
	}
	return 0;
}


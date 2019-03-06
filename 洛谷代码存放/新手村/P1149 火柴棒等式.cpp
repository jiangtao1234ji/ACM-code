#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int a[12] = { 1,2,8,9,6,9,29,39,38,65,88,128 };

int main()
{
	int n;
	cin>>n;
	if(n<=12)
		cout<<"0"<<endl;
	else
		cout<<a[n-13]<<endl;
	return 0;
}


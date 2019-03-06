#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;

char map[2000][2000];

void fun(int n, int a, int b)
{
	if(n==1)
	{
		map[a][b]='X';
		return;
	}
	int k=pow(3,n-2);
	fun(n-1,a,b);
	fun(n-1,a,b+2*k);
	fun(n-1,a+k,b+k);
	fun(n-1,a+2*k,b);
	fun(n-1,a+2*k,b+2*k);
}
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0; i<pow(3,n-1); i++)
			for(int j=0; j<pow(3,n-1); j++)
				map[i][j]=' ';
		fun(n,0,0);
		for(int i=0; i<pow(3,n-1); i++)
		{
			for(int j=0; j<pow(3,n-1); j++)
				cout<<map[i][j];
			cout<<endl;
		}
		cout<<"-"<<endl;
	}
	return 0;
}


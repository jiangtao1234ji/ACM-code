#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int b=4*n+5;
		char a[b][b];
		for(int i=0; i<b; i++)
			for(int j=0; j<b; j++)
				a[i][j]='.';
		int x=b/2;
		for(int i = x-2; i <= x+2; i++)
		{
			a[i][x] = '$';
			a[x][i] = '$';
		}
		for(int m = 0; m <n; m++)
		{
			for(int i = x-2-2*m; i <= (x+2+2*m); i++)
			{
				a[x - (4+2*m)][i] = '$';
				a[x + (4+2*m)][i] = '$';
				a[i][x - (4+2*m)] = '$';
				a[i][x + (4+2*m)] = '$';
			}
		}
		for(int m = 0; m <n; m++)
		{
			for(int i = x-(3+2*m); i <= x+(3+2*m); i++)
			{
				a[x - (2+2*m)][i] = '$';
				a[x + (2+2*m)][i] = '$';
				a[i][x - (2+2*m)] = '$';
				a[i][x + (2+2*m)] = '$';
			}
			a[x - (2+2*m)][x - (1+2*m)] = '.';
			a[x - (2+2*m)][x + (1+2*m)] = '.';
			a[x + (2+2*m)][x - (1+2*m)] = '.';
			a[x + (2+2*m)][x + (1+2*m)] = '.';
			a[x - (1+2*m)][x - (2+2*m)] = '.';
			a[x - (1+2*m)][x + (2+2*m)] = '.';
			a[x + (1+2*m)][x - (2+2*m)] = '.';
			a[x + (1+2*m)][x + (2+2*m)] = '.';
		}
		for(int i=0; i<b; i++)
		{
			for(int j=0; j<b; j++)
				cout<<a[i][j];
			cout<<endl;
		}
	}
	return 0;
}


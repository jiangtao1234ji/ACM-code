#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	while(cin>>t)
	{
		while(t--)
		{
			int n;
			cin>>n;
			int a[][2] = {1,1,1,0};
			int res[][2] = {1,0,0,1};
			while(n)
			{
				if(n & 1)
				{
					int temp1[2][2];
					temp1[0][0] = (res[0][0]*a[0][0]+res[0][1]*a[1][0])%10000;
					temp1[0][1] = (res[0][0]*a[0][1]+res[0][1]*a[1][1])%10000;
					temp1[1][0] = (res[1][0]*a[0][0]+res[1][1]*a[1][0])%10000;
					temp1[1][1] = (res[1][0]*a[0][1]+res[1][1]*a[1][1])%10000;
					for(int i=0; i<2; i++)
						for(int j=0; j<2; j++)
							res[i][j] = temp1[i][j];
				}

				int temp[2][2];
				temp[0][0] = (a[0][0]*a[0][0]+a[0][1]*a[1][0])%10000;
				temp[0][1] = (a[0][0]*a[0][1]+a[0][1]*a[1][1])%10000;
				temp[1][0] = (a[1][0]*a[0][0]+a[1][1]*a[1][0])%10000;
				temp[1][1] = (a[1][0]*a[0][1]+a[1][1]*a[1][1])%10000;
			
				for(int i=0; i<2; i++)
					for(int j=0; j<2; j++)
						a[i][j] = temp[i][j];
				n>>=1;
			}
			cout<<(2*res[0][1]-1)%10000<<endl;
		}
	}
	return 0;
}


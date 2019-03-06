#include<iostream>

using namespace std;

int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int array[n][m];
		int i,j;
		for(i=0; i<n; i++)
			array[i][0]=65+i;

		for(i=0; i<m; i++)
			array[0][i]=65+i;

		for(i=1; i<n; i++)
			for(j=1; j<m; j++)
				array[i][j]=array[i-1][j-1];

		for(i=0; i<n; i++)
		{

			for(j=0; j<m; j++)
			{

				cout<<(char)array[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}

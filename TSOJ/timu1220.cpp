#include<iostream>
#define N 8

using namespace std;

int count = 0;
int chess[N][N];
bool CanPlace(int row,int col,int (*chess)[8])
{
	if(chess[row][col]==1)
		return false;
	for(int i=0; i<8; i++)
	{
		if(chess[i][col]==1)
		{
			return false;
		}
		if(chess[row][i]==1)
		{
			return false;
		}
	}


	for(int i=0; i<8; i++)
	{
		if(row-i<0||col-i<0)
		{
			break;
		}
		if(chess[row-i][col-i]==1)
		{
			return false;
		}
	}


	for(int i=0; i<8; i++)
	{
		if(row-i<0||col+i>7)
		{
			break;
		}
		if(chess[row-i][col+i]==1)
		{
			return false;
		}

	}


	for(int i=0; i<8; i++)
	{
		if(row+i>7||col-i<0)
		{
			break;
		}
		if(chess[row+i][col-i]==1)
		{
			return false;
		}
	}


	for(int i=0; i<8; i++)
	{
		if(row+i>7||col+i>7)
		{
			break;
		}
		if(chess[row+i][col+i]==1)
		{
			return false;
		}
	}

	return true;
}
void EightQueen(int row,int col, int (*chess)[8])
{

	int chess2[8][8];

	for(int i=0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			chess2[i][j]=chess[i][j];
		}
	}

	if(row==8)
		count++;
	else
	{
		for(int j=0; j<8; j++)
		{
			if(CanPlace(row,j,chess2))
			{

				chess2[row][j]=1;

				EightQueen(row+1,j,chess2);

				chess2[row][j]=0;
			}
			else if(chess[row][col]==1)
				EightQueen(row+1,j,chess2);
		}
	}
}
int main()
{

	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			cin>>chess[i][j];
		}
	}
	EightQueen(0,0,chess);
	cout<<count<<endl;
	return 0;
}

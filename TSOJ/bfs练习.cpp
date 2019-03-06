#include<iostream>
#include<string>
#include<algorithm>
#include<queue> 

using namespace std;

int map[6][6];
bool vis[6][6];
int dir[4][2]= {0,1,0,-1,1,0,-1,0};
int ans=10000000;
int starx, stary, endx, endy;

struct State
{
	int x, y, sum, val;
	int step;
};
int main()
{
	int k;
	while(k--)
	{
		for(int i=0; i<6; i++)
		{
			for(int j=0; j<6; j++)
			{
				cin>>map[i][j];
				
			}
		}
	}
	return 0;
}


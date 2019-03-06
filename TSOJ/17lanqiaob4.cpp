#include <iostream>
using namespace std;

int ans = 0;
int visited[7][7] = {0};
int dx[] = {0, 0, -1, 1}, dy[] = {1, -1, 0, 0};

void dfs(int x, int y)
{
	if(x == 0 || y == 0 || x == 6 || y == 6)
	{
		++ ans;
		return;
	}

	for(int i = 0; i < 4; ++ i)
	{
		int nx = x + dx[i], ny = y + dy[i];
		if(0 == visited[nx][ny])
		{
			int dnx = 6 - nx, dny = 6 - ny;
			visited[nx][ny] = visited[dnx][dny] = 1;
			dfs(nx, ny);
			visited[nx][ny] = visited[dnx][dny] = 0;
		}
	}
}

int main()
{
	visited[3][3] = 1;
	dfs(3, 3);
	cout << (ans/4) << endl;
	return 0;
}

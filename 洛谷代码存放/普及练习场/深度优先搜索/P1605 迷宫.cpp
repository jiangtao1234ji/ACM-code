#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10000

using namespace std;

int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int map[10][10], vis[10][10];
int sx, sy, ex, ey;
int n, m, t, cnt;

bool check(int x, int y)
{
    if (x <= 0 || x > n || y <= 0 || y > m)
        return false;
    return true;
}

void dfs(int x, int y)
{
    if (x == ex && y == ey)
    {
        cnt++;
        return;
    }
    else
    {
        for (int k = 0; k < 4; k++)
        {
            int dx = x + dir[k][0];
            int dy = y + dir[k][1];
            if (check(dx, dy))
            {
                if (!map[dx][dy] && !vis[dx][dy])
                {
                    vis[dx][dy] = 1;
                    dfs(dx, dy);
                    vis[dx][dy] = 0;
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m >> t;
    cin >> sx >> sy >> ex >> ey;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        map[x][y] = 1;
    }
    map[sx][sy] = 1;
    dfs(sx, sy);

    cout << cnt << endl;

    return 0;
}
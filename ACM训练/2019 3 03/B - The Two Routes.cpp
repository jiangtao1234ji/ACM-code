#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define maxn 505
#define inf 100000000

using namespace std;

int n, m;
int dis[maxn], map[maxn][maxn];
bool vis[maxn];

void spfa()
{
    for (int i = 1; i <= n; i++)
        dis[i] = inf;
    dis[1] = 0;
    vis[1] = 1;
    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        vis[tmp] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (tmp == i)
                continue;
            if (map[tmp][i])
            {
                if (dis[i] > dis[tmp] + 1)
                {
                    dis[i] = dis[tmp] + 1;
                    if (!vis[i])
                    {
                        vis[i] = 1;
                        q.push(i);
                    }
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int x, y;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        map[x][y] = map[y][x] = 1;
    }
    if (map[1][n] == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == j)
                    continue;
                map[i][j] = 1 - map[i][j];
            }
        }
    }
    spfa();
    if (dis[n] == inf)
        cout << "-1" << endl;
    else
        cout << dis[n] << endl;

    return 0;
}
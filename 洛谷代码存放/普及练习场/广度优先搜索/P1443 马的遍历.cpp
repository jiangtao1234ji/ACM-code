#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#define maxn 405

using namespace std;

struct node
{
    int x, y;
    node() {}
    node(int x, int y) : x(x), y(y) {}
};

int n, m, sx, sy;
int dir[8][2] = {{2, 1}, {-2, -1}, {2, -1}, {-2, 1}, {1, 2}, {-1, -2}, {-1, 2}, {1, -2}};
int map[maxn][maxn];
queue<node> q;

bool check(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > m)
        return false;
    return true;
}

void bfs()
{
    while (!q.empty())
    {
        node tmp = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int dx = tmp.x + dir[i][0];
            int dy = tmp.y + dir[i][1];
            if (check(dx, dy) && map[dx][dy] == 0)
            {
                map[dx][dy] = map[tmp.x][tmp.y] + 1;
                q.push(node(dx, dy));
            }
        }
    }
}
int main()
{
    cin >> n >> m >> sx >> sy;
    map[sx][sy] = 0;
    q.push(node(sx, sy));
    bfs();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == sx && j == sy)
                printf("%-5d", 0);
            else if (map[i][j] == 0)
                printf("%-5d", -1);
            else
                printf("%-5d", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
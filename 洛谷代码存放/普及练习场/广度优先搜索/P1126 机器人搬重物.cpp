#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <queue>
#define maxn 55

using namespace std;

struct node
{
    int x, y, s, st;
    node() {}
    node(int x, int y, int s, int st) : x(x), y(y), s(s), st(st) {}
};

int dir[5][2] = {{0, 0}, {0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, m, sx, sy, ex, ey;
char w;
int map[maxn][maxn], vis[maxn][maxn], ans[10005], cnt, minn = 100000000;
queue<node> q;

bool check(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > m)
        return true;
    return false;
}

void bfs()
{
    while (!q.empty())
    {
        node tmp = q.front();
        q.pop();
        if (tmp.x == ex && tmp.y == ey)
        {
            ans[++cnt] = tmp.st;
        }
        for (int i = 1; i <= 4; i++)
        {
            int step = tmp.st;
            if (i != tmp.s)
            {
                step = tmp.st + 1;
                if ((i == 1 && tmp.s == 2) || (i == 2 && tmp.s == 1) || (i == 3 && tmp.s == 4) || (i == 4 && tmp.s == 3))
                    step = tmp.st + 2;
            }
            for (int j = 1; j <= 3; j++)
            {
                int dx = tmp.x + j * dir[i][0];
                int dy = tmp.y + j * dir[i][1];
                if (check(dx, dy) || map[dx][dy])
                    break;
                if (vis[dx][dy] > step)
                {
                    q.push(node(dx, dy, i, step + 1));
                    vis[dx][dy] = step;
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            bool a;
            cin >> a;
            if (a)
            {
                map[i][j] = 1;
                map[i - 1][j - 1] = 1;
                map[i - 1][j] = 1;
                map[i][j - 1] = 1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        map[n][i] = 1;
        map[i][m] = 1;
    }
    cin >> sx >> sy >> ex >> ey >> w;
    node a;
    a.x = sx;
    a.y = sy;
    a.st = 0;
    if (w == 'E')
        a.s = 1;
    if (w == 'W')
        a.s = 2;
    if (w == 'S')
        a.s = 3;
    if (w == 'N')
        a.s = 4;
    q.push(a);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            vis[i][j] = 10000000;
    }
    bfs();
    for (int i = 1; i <= cnt; i++)
    {
        if (ans[i] < minn)
            minn = ans[i];
        // cout << ans[i] << " ";
    }
    if (minn < 100000000)
        cout << minn << endl;
    else
        cout << -1 << endl;

    return 0;
}
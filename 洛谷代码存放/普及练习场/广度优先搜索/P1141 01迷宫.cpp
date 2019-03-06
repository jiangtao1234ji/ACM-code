#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <queue>
#define maxn 1005

using namespace std;

struct node
{
    int x, y;
    node() {}
    node(int x, int y) : x(x), y(y) {}
};

int map[maxn][maxn], dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
char num[maxn];
int n, m;
int vis[maxn][maxn], a[1000001];

queue<node> q;

bool check(int x, int y)
{
    if (x <= 0 || x > n || y <= 0 || y > n)
        return false;
    return true;
}

void bfs()
{
    int d = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (!vis[i][j])
            {
                q.push(node(i, j));
                d++;
                vis[i][j] = d;
                int sum = 0;
                while (!q.empty())
                {
                    node tmp = q.front();
                    q.pop();
                    for (int i = 0; i < 4; i++)
                    {
                        int dx = tmp.x + dir[i][0];
                        int dy = tmp.y + dir[i][1];
                        if (map[tmp.x][tmp.y] == 0 && map[dx][dy] == 1 && check(dx, dy) && !vis[dx][dy])
                        {
                            vis[dx][dy] = d;
                            q.push(node(dx, dy));
                        }
                        if (map[tmp.x][tmp.y] == 1 && map[dx][dy] == 0 && check(dx, dy) && !vis[dx][dy])
                        {
                            vis[dx][dy] = d;
                            q.push(node(dx, dy));
                        }
                    }
                    sum++;
                }
                a[d] = sum;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", num);
        for (int j = 1; j <= n; j++)
        {
            map[i][j] = num[j - 1] - '0';
        }
    }
    bfs();
    int stx, sty;
    for (int i = 0; i < m; i++)
    {
        scanf("%d%d", &stx, &sty);
        cout << a[vis[stx][sty]] << endl;
    }
    // for (int i = 0; i < 10; i++)
    //     cout << a[i] << " ";
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //         cout << vis[i][j] << " ";
    //     cout << endl;
    // }
    return 0;
}
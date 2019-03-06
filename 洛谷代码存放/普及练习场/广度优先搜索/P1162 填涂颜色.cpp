#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#define maxn 10000

using namespace std;

struct node
{
    int x, y;
    node()
    {
    }
    node(int x, int y) : x(x), y(y) {}
};

int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
queue<node> q;
int map[35][35], n;
bool vis[35][35];

bool check(int x, int y)
{
    if (x > n || x < 1 || y > n || y < 1)
        return false;
    return true;
}

void bfs(int x, int y)
{
    vis[x][y] = 1;
    q.push(node(x, y));
    while (!q.empty())
    {
        node tmp = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int dx = tmp.x + dir[i][0];
            int dy = tmp.y + dir[i][1];
            if (map[dx][dy] == 0 && check(dx, dy) && !vis[dx][dy])
            {
                vis[dx][dy] = 1;
                q.push(node(dx, dy));
            }
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> map[i][j];
            if (map[i][j] == 1)
                vis[i][j] = 1;
        }
    }
    for (int i = 1; i <= n; i = i + n - 1)
    { 
        for (int j = 1; j <= n; j++)
        {
            if (vis[i][j])
                continue;
            bfs(i, j);
        }
    }
    for (int i = 1; i <= n; i = i + n - 1) 
    {
        for (int j = 1; j <= n; j++)
        {
            if (vis[j][i])
                continue;
            bfs(j, i);
        }
    }
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++)
        {
            if (!vis[i][j])
                cout << 2 << " ";
            else
                cout << map[i][j] << " ";
            
        }
        cout << endl;
    }

    return 0;
}
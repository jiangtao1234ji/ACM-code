#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#define maxn 110

using namespace std;

struct node
{
    int x, y;
} c[maxn];

int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
char s[maxn][maxn];
bool vis[maxn][maxn];

string a = "yizhong";

void dfs(int x, int y, node c[], int k, int cur)
{
    if (cur == 7)
    {
        for (int i = 0; i < 7; i++)
            vis[c[i].x][c[i].y] = 1;
    }
    else
    {
        int dx = x + dir[k][0]; 
        int dy = y + dir[k][1];
        if (cur == 6 || s[dx][dy] == a[cur + 1])
        {
            c[cur].x = x;
            c[cur].y = y;
            dfs(dx, dy, c, k, cur + 1);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == 'y')
            {
                for (int k = 0; k < 8; k++)
                {
                    int x = i + dir[k][0];
                    int y = j + dir[k][1];
                    if (s[x][y] == 'i')
                    {
                        dfs(i, j, c, k, 0);
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vis[i][j])
                cout << s[i][j];
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
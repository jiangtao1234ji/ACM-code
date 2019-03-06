#include <iostream>
#include <algorithm>
#include <cstring>
#define maxn 28

using namespace std;

char s1[maxn], s2[maxn], s3[maxn];
int a[maxn], b[maxn], c[maxn], tmp[maxn], vis[maxn];
int n;

void dfs(int x, int y, int s)
{
    for (int i = 1; i <= x; i++)
    {
        int a1 = tmp[a[i]], b1 = tmp[b[i]], c1 = tmp[c[i]];
        if (a1 == -1 || b1 == -1 || c1 == -1)
            continue;
        if ((a1 + b1 + 1) % n != c1 && (a1 + b1) % n != c1)
            return;
    }
    if (!x)
    {
        for (int i = 0; i < n; i++)
            cout << tmp[i] << " ";
        exit(0);
    }
    if (y == 1)
    {
        if (tmp[a[x]] > -1)
        {
            dfs(x, 2, s);
            return;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (!vis[i])
            {
                tmp[a[x]] = i;
                vis[i] = 1;
                dfs(x, 2, s);
                tmp[a[x]] = -1;
                vis[i] = 0;
            }
        }
        return;
    }
    int a1 = tmp[a[x]], b1 = tmp[b[x]], c1 = tmp[c[x]];
    if (b1 > -1)
    {
        int sum = a1 + b1 + s;
        if (c1 == -1)
        {
            tmp[c[x]] = sum % n;
            vis[sum % n] = 1;
            dfs(x - 1, 1, sum / n);
            tmp[c[x]] = -1;
            vis[sum % n] = 0;
            return;
        }
        if (sum % n == c1)
            dfs(x - 1, 1, sum / n);
        return;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (!vis[i])
        {
            int sum = a1 + i + s;
            if ((sum % n != c1 && c1 > -1) || (c1 == -1 && vis[sum % n]))
                continue;
            if (c1 == -1)
            {
                tmp[c[x]] = sum % n;
                vis[sum % n] = 1;
            }
            tmp[b[x]] = i;
            vis[i] = 1;
            dfs(x - 1, 1, sum / n);
            tmp[b[x]] = -1;
            vis[i] = 0;
            if (c1 == -1)
                vis[sum % n] = 0, tmp[c[x]] = -1;
        }
    }
}

int main()
{
    cin >> n;
    scanf("%s%s%s", s1, s2, s3);
    for (int i = 0; i < n; i++)
    {
        a[i + 1] = s1[i] - 'A';
        b[i + 1] = s2[i] - 'A';
        c[i + 1] = s3[i] - 'A';
    }
    for (int i = 0; i < n; i++)
        tmp[i] = -1;
    dfs(n, 1, 0);
    return 0;
}
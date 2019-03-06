#include <iostream>
#include <algorithm>
#include <string>
#define maxn 1005

using namespace std;

struct node
{
    int x, y, w;
    double ans;
};

node a[maxn];
int f[100];
int n, m;

bool cmp(node a, node b)
{
    return a.w < b.w;
}

bool cmp1(node a, node b)
{
    return a.ans < b.ans;
}

int find(int x)
{
    if (x == f[x])
        return x;
    return f[x] = find(f[x]);
}

void kruskal(int sum)
{
    for (int i = 1; i <= n; i++)
        f[i] = i;
    double avg = 1.0 * sum / (n - 1);
    for (int i = 0; i < m; i++)
    {
        a[i].ans = 1.0 * abs(a[i].w - avg) * abs(a[i].w - avg);
    }
    sort(a, a + m, cmp1);
    for (int i = 0; i < m; i++)
    {
        int x1 = find(a[i].x), y1 = find(a[i].y);
        if(x1 == y1)
            continue;
        f[x1] = y1;
        
    }
}

int main()
{
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
            break;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i].x >> a[i].y >> a[i].w;
        }
        sort(a, a + m, cmp);
        int minx = 0, maxx = 0;
        for (int i = 0; i < n - 1; i++)
        {
            minx += a[i].w;
        }
        for (int i = m - 1; i > m - n; i--)
        {
            maxx += a[i].w;
        }
        for (int i = minx; i <= maxx; i++)
        {
            kruskal(i);
        }
    }
    return 0;
}
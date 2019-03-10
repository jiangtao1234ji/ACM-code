#include <iostream>
#include <algorithm>
#include <string>
#define maxn 200005

using namespace std;

int n, m, f[maxn], ans, cnt;

// Kruskal
struct node
{
    int u, v, w;
};

node a[maxn];

bool cmp(node a, node b)
{
    return a.w < b.w;
}

int find(int x)
{
    if (x == f[x])
        return x;
    else
    {
        f[x] = find(f[x]);
        return f[x];
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        f[i] = i;
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i].u >> a[i].v >> a[i].w;
    }
    sort(a + 1, a + m + 1, cmp);
    for (int i = 1; i <= m; i++)
    {
        int t1 = find(a[i].u), t2 = find(a[i].v);
        if (t1 == t2)
            continue;
        ans += a[i].w;
        f[t1] = t2;
        cnt++;
        if (cnt == n - 1)
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}

//prime

#include <iostream>
#include <algorithm>
#include <string>
#define maxn 200005
#define inf 100000000

using namespace std;

int n, m;

struct edge
{
    int w, v, next;
};

edge a[maxn << 1];

int head[maxn], dis[maxn], cnt, tot, now = 1, ans;
bool vis[maxn];

void add(int u, int v, int w)
{
    a[++cnt].v = v;
    a[cnt].w = w;
    a[cnt].next = head[u];
    head[u] = cnt;
}

int prime()
{
    for (int i = 0; i <= n; i++)
        dis[i] = inf;
    for (int i = head[1]; i; i = a[i].next)
    {
        dis[a[i].v] = min(dis[a[i].v], a[i].w);
    }
    while (++tot < n)
    {
        int minl = inf;
        vis[now] = 1;
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i] && minl > dis[i])
            {
                minl = dis[i];
                now = i;
            }
        }
        ans += minl;
        for (int i = head[now]; i; i = a[i].next)
        {
            int v = a[i].v;
            if (dis[v] > a[i].w && !vis[i])
                dis[v] = a[i].w;
        }
    }
    return ans;
}

int main()
{
    cin >> n >> m;
    int u, v, w;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        add(u, v, w);
        add(v, u, w);
    }
    cout << prime() << endl;
}


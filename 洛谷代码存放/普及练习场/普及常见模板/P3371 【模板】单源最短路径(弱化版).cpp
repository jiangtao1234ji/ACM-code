#include <bits/stdc++.h>
#define maxn 500005
#define inf 2147483647

using namespace std;

// struct node
// {
//     int next, to, w;
// };

// int n, m, s, cnt;

// node a[maxn];

// queue<int> q;

// int dis[maxn], head[maxn];
// bool vis[maxn];

// void add(int u, int v, int w)
// {
//     a[++cnt].to = v;
//     a[cnt].w = w;
//     a[cnt].next = head[u];
//     head[u] = cnt;
// }

// void spfa()
// {
//     for (int i = 1; i <= n; i++)
//     {
//         dis[i] = inf;
//     }
//     q.push(s);
//     dis[s] = 0;
//     vis[s] = 1;
//     while (!q.empty())
//     {
//         int u = q.front();
//         q.pop();
//         vis[u] = 0;
//         for (int i = head[u]; i; i = a[i].next)
//         {
//             int v = a[i].to;
//             if (dis[v] > dis[u] + a[i].w)
//             {
//                 dis[v] = dis[u] + a[i].w;
//                 if (!vis[v])
//                 {
//                     vis[v] = 1;
//                     q.push(v);
//                 }
//             }
//         }
//     }
// }

// int main()
// {
//     cin >> n >> m >> s;
//     int x, y, z;
//     for (int i = 1; i <= m; i++)
//     {
//         cin >> x >> y >> z;
//         add(x, y, z);
//     }
//     spfa();
//     for (int i = 1; i <= n; i++)
//         cout << dis[i] << " ";
//     return 0;
// }

//dijkstra
struct node
{
    int to, w, next;
};

node a[maxn];
int head[maxn], n, m, s, cnt, dis[maxn];
bool vis[maxn];
typedef pair<int, int> P;

priority_queue<P, vector<P>, greater<P> > q;

void add(int u, int v, int w)
{
    a[++cnt].to = v;
    a[cnt].w = w;
    a[cnt].next = head[u];
    head[u] = cnt;
}

void dijkstra()
{
    for (int i = 1; i <= n; i++)
        dis[i] = inf;
    dis[s] = 0;
    q.push(make_pair(0, s));
    while (!q.empty())
    {
        int u = q.top().second;
        q.pop();
        if (vis[u])
            continue;
        vis[u] = 1;
        for (int i = head[u]; i; i = a[i].next)
        {
            int v = a[i].to;
            if (!vis[v] && dis[v] > dis[u] + a[i].w)
            {
                dis[v] = dis[u] + a[i].w;
                q.push(make_pair(dis[v], v));
            }
        }
    }
}

int main()
{
    cin >> n >> m >> s;
    int x, y, z;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y >> z;
        add(x, y, z);
    }
    dijkstra();
    for (int i = 1; i <= n; i++)
        cout << dis[i] << " ";
    return 0;
}
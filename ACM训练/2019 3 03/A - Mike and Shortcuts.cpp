#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#define maxn 200400
#define inf 100000000

using namespace std;

int n;
vector<int> a[maxn];
int dis[maxn];
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
        for (int i = 0; i < a[tmp].size(); i++)
        {
            int m = a[tmp][i];
            if (dis[m] > dis[tmp] + 1)
            {
                dis[m] = dis[tmp] + 1;
                if (!vis[m])
                {
                    vis[m] = 1;
                    q.push(m);
                }
            }
        }
    }
}
int main()
{
    cin >> n;
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[i].push_back(x);
        if (i != n)
        {
            a[i].push_back(i + 1);
            a[i + 1].push_back(i);
        }
    }
    spfa();
    for (int i = 1; i <= n; i++)
        cout << dis[i] << " ";
    return 0;
}
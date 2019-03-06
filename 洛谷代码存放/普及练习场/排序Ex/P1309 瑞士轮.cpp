#include <iostream>
#include <algorithm>
#include <string>
#define maxn 1000005

using namespace std;

struct stu
{
    int s, w, id;
};

stu a[maxn * 2], win[maxn], lose[maxn];
int n, r, q;

bool cmp(stu a, stu b)
{
    if (a.s == b.s)
        return a.id < b.id;
    return a.s > b.s;
}

bool Cmp(stu a,stu b){
    return a.w>b.w;
}

void solve()
{
    for (int i = 0; i < r; i++)
    {
        int now = 0;
        for (int i = 1; i <= n; i++)
        {
            int x = i + i - 1, y = i + i;
            now++;
            if (Cmp(a[x], a[y]))
                win[now] = a[x], lose[now] = a[y], win[now].s++;
            else
                win[now] = a[y], lose[now] = a[x], win[now].s++;
        }
        int W, L, K;
        W = L = 1, K = 0;
        while ((W <= n && L <= n))
            if (cmp(win[W], lose[L]))
                a[++K] = win[W++];
            else
                a[++K] = lose[L++];
        while (W <= n)
            a[++K] = win[W++];
        while (L <= n)
            a[++K] = lose[L++];
    }
}

int main()
{
    cin >> n >> r >> q;
    for (int i = 1; i <= 2 * n; i++)
    {
        scanf("%d", &a[i].s);
        a[i].id = i;
    }
    for (int i = 1; i <= 2 * n; i++)
    {
        scanf("%d", &a[i].w);
    }
    sort(a + 1, a + 2 * n + 1, cmp);
    solve();
    // for (int i = 1; i <= 2 * n; i++)
    //     cout << a[i].id << " " << a[i].s << endl;
    cout << a[q].id << endl;
    return 0;
}
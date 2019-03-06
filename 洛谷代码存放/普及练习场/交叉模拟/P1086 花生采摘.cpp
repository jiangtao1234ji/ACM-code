#include <iostream>
#include <algorithm>
#include <string>
#define maxn 30

using namespace std;

struct node
{
    int x;
    int y;
    int num;
};

node a[900];

bool cmp(node a, node b)
{
    return a.num > b.num;
}

int main()
{
    int m, n, k, h;
    cin >> m >> n >> k;
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> h;
            if (h > 0)
            {
                a[count].x = i + 1;
                a[count].y = j + 1;
                a[count].num = h;
                count++;
            }
        }
    }
    sort(a, a + count, cmp);
    int step = 0, ans = 0;
    for (int i = 0; i < count; i++)
    {
        if (i == 0)
        {
            step += a[i].x + 1;
            if (step + a[i].x > k)
                break;
            ans += a[i].num;
        }
        else
        {
            step += abs(a[i - 1].x - a[i].x) + abs(a[i - 1].y - a[i].y) + 1;
            if (step + a[i].x > k)
                break;
            ans += a[i].num;
        }
    }
    cout << ans << endl;

    return 0;
}
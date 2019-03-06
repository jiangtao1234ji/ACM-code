#include <iostream>
#include <algorithm>
#include <string>
#define maxn 100005

using namespace std;

int a[maxn], cnt, f[100001], b[100001], t=0, ans = 1;

int main()
{
    while (~scanf("%d", &a[++cnt]));
    cnt--;
    for (int i = 1; i <= cnt; i++)
    {
        f[i] = 1;
        for (int j = t; j > 0; j--)
        {
            if (a[i] <= a[b[j]])
            {
                f[i] = f[b[j]] + 1;
                break;
            }
        }
        t = max(t, f[i]);
        b[f[i]] = i;
        ans = max(ans, f[i]);
    }
    cout << ans << endl;
    ans = 1;
    t = 0;
    for (int i = 1; i <= cnt; i++)
    {
        f[i] = 1;
        for (int j = t; j > 0; j--)
            if (a[i] > a[b[j]])
            {
                f[i] = f[b[j]] + 1;
                break;
            }
        t = max(t, f[i]);
        b[f[i]] = i;
        ans = max(ans, f[i]);
    }
    cout << ans << endl;
    return 0;
}
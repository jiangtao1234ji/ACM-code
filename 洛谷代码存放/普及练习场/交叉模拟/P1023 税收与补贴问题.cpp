#include <iostream>
#include <algorithm>
#include <string>
#define maxn 100005

using namespace std;

double num[maxn], k[maxn];
int main()
{
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    int px = x;
    int lx, ly;
    while (x != -1 && y != -1)
    {
        lx = x, ly = y, num[x] = y;
        cin >> x >> y;
        k[lx] = (y - ly) / (x - lx);
    }
    int change;
    cin >> change;
    double k1, xx, yy;
    for (int i = px; i <= lx; i++)
    {
        if (!num[i])
            num[i] = k1 * (i - xx) + yy;
        else
        {
            k1 = k[i];
            xx = i;
            yy = num[i];
        }
    }
    while (ly - change > 0)
    {
        lx++;
        ly -= change;
        num[lx] = ly;
    }
    int maxx = 0, ans = 0;
    for (int i = px; i <= lx; i++)
    {
        if ((i - px) * num[i] > maxx)
        {
            ans = i;
            maxx = (i - px) * num[i];
        }
    }
    if (ans == n)
        cout << "0" << endl;
    else if (ans > n)
    {
        for (int x = 1;; x++)
        {
            maxx = ans = 0;
            for (int i = px; i <= lx; ++i)
                if ((i - px + x) * num[i] >= maxx)
                    ans = i, maxx = (i - px + x) * num[i];
            if (ans == n)
            {
                cout << x << endl;
                return 0;
            }
        }
    }
    else
    {
        for (int x = -1;; x--)
        {
            maxx = ans = 0;
            for (int i = px + 1; i <= lx; ++i)
                if ((i - px + x) * num[i] >= maxx)
                    ans = i, maxx = (i - px + x) * num[i];
            if (ans == n)
            {
                 cout << x << endl;
                return 0;
            }
        }
    }

    return 0;
}
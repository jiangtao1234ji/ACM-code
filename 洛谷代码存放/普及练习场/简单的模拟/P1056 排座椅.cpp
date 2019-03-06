#include <iostream>
#include <algorithm>
#include <string>
#define maxn 1050

using namespace std;

int x[maxn], y[maxn];
int knum[maxn], lnum[maxn];

int main()
{
    int m, n, k, l, d, x1, y1, x2, y2;
    cin >> m >> n >> k >> l >> d;
    for (int i = 1; i <= d; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2)
            x[min(y1, y2)]++;
        else
            y[min(x1, x2)]++;
    }
    for (int i = 1; i <= k; i++)
    {
        int kmax = 0;
        int p;
        for (int j = 1; j <= m; j++)
        {
            if (y[j] > kmax)
            {
                kmax = y[j];
                p = j;
            }
        }
        y[p] = 0;
        knum[p]++;
    }

    for (int i = 1; i <= l; i++)
    {
        int lmax = 0;
        int p;
        for (int j = 1; j <= n; j++)
        {
            if (x[j] > lmax)
            {
                lmax = x[j];
                p = j;
            }
        }
        x[p] = 0;
        lnum[p]++;
    }

    for (int i = 0; i < maxn; i++)
    {
        if (knum[i])
            cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < maxn; i++)
    {
        if (lnum[i])
            cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
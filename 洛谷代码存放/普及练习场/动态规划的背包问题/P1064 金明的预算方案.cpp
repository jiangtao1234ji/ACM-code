#include <iostream>
#include <algorithm>
#include <string>
#define maxn 65

using namespace std;

int mp[maxn], mw[maxn], fp[maxn][3], fw[maxn][3], a[50000];

int main()
{
    int n, m, p, w, f;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> p >> w >> f;
        if (!f)
        {
            mp[i] = p;
            mw[i] = p * w;
        }
        else
        {
            fp[f][0]++;
            fp[f][fp[f][0]] = p;
            fw[f][fp[f][0]] = w * p;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = n; j >= mp[i]; j--)
        {
            a[j] = max(a[j], a[j - mp[i]] + mw[i]);
            if (j >= mp[i] + fp[i][1])
            {
                a[j] = max(a[j], a[j - mp[i] - fp[i][1]] + mw[i] + fw[i][1]);
            }
            if (j >= mp[i] + fp[i][2])
            {
                a[j] = max(a[j], a[j - mp[i] - fp[i][2]] + mw[i] + fw[i][2]);
            }
            if (j >= mp[i] + fp[i][1] + fp[i][2])
            {
                a[j] = max(a[j], a[j - mp[i] - fp[i][1] - fp[i][2]] + mw[i] + fw[i][1] + fw[i][2]);
            }
        }
    }
    cout << a[n] << endl;
    return 0;
}
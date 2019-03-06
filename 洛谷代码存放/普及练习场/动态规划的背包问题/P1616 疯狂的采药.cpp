#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10005

using namespace std;

int v[maxn], w[maxn], f[100000], maxf;

int main()
{
    int t, m;
    cin >> t >> m;
    for (int i = 1; i <= m; i++)
        cin >> v[i] >> w[i];
    for (int i = 1; i <= m; i++)
    {
        for (int j = v[i]; j <= t; j++)
        {
            f[j] = max(f[j], f[j - v[i]] + w[i]);
            maxf = max(maxf, f[j]);
        }
    }
    cout << maxf << endl;
    return 0;
}
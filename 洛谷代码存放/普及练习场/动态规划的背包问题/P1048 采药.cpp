#include <iostream>
#include <algorithm>
#include <string>
#define maxn 105

using namespace std;

int v[maxn], w[maxn], f[50000];

int main()
{
    int t, m;
    cin >> t >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> v[i] >> w[i];
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = t; j >= v[i]; j--)
        {
            if (j >= v[i])
            {
                f[j] = max(f[j], f[j - v[i]] + w[i]);
            }
        }
    }
    cout << f[t] << endl;
    return 0;
}
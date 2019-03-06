#include <iostream>
#include <algorithm>
#include <string>
#define maxn 30

using namespace std;

int w[maxn], v[maxn], f[100000];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i] >> w[i];
        w[i] *= v[i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = n; j >= v[i]; j--)
        {
            if(j>=v[i])
            {
                f[j] = max(f[j], f[j - v[i]] + w[i]);
            }
        }
    }
    cout << f[n] << endl;
    return 0;
}
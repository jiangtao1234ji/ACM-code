#include <iostream>
#include <algorithm>
#include <string>
#define maxn 35

using namespace std;

int a[maxn], f[50000];

int main()
{
    int v, n;
    cin >> v >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = v; j >= a[i]; j--)
        {
            f[j] = max(f[j], f[j - a[i]] + a[i]);
        }
    }
    cout << v - f[v] << endl;
    return 0;
}
#include <iostream>
#include <algorithm>
#include <string>
#define maxn 200005

using namespace std;

int n, m, f[maxn];

int find(int x)
{
    if (x == f[x])
        return x;
    else
        return f[x] = find(f[x]);
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        f[i] = i;
    int x, y, z;
    for (int i = 1; i <= m; i++)
    {
        cin >> z >> x >> y;
        int t1 = find(x), t2 = find(y);
        if (z == 1)
        {
            f[t1] = t2;
        }
        else
        {
            if (t1 == t2)
                cout << "Y" << endl;
            else
                cout << "N" << endl;
        }
    }
    return 0;
}
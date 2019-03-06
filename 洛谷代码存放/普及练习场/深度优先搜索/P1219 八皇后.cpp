#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10000

using namespace std;

int n, ans, k, cnt, anss[110], a[110], b[110], c[110];
int add = 20;

void print()
{
    if (cnt < 3)
    {
        for (int i = 1; i <= n; i++)
            cout << anss[i] << " ";
        cout << endl;
        cnt++;
    }
    return;
}

void dfs(int i)
{
    if (i == n + 1)
    {
        print();
        ans++;
        return;
    }
    for (int j = 1; j <= n; j++)
    {
        if (a[j] == 0)
        {
            if (b[i - j + add] == 0)
            {
                if (c[i + j] == 0)
                {
                    a[j] = 1;
                    b[i - j + add] = 1;
                    c[i + j] = 1;
                    anss[++k] = j;
                    dfs(i + 1);
                    k--;
                    a[j] = 0;
                    b[i - j + add] = 0;
                    c[i + j] = 0;
                }
            }
        }
    }
}

int main()
{
    cin >> n;
    dfs(1);
    cout << ans << endl;
    return 0;
}
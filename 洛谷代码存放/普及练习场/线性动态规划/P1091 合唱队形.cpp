#include<iostream>
#include<algorithm>
#include<string>
#define maxn 105

using namespace std;

int a[maxn], f[2][maxn], ans;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i<=n; i++)
    {
        f[0][i] = 1;
        for (int j = 1; j < i; j++)
        {
            if(a[j]<a[i])
                f[0][i] = max(f[0][i], f[0][j] + 1);
        }
    }
    for (int i = n; i>=1; i--)
    {
        f[1][i] = 1;
        for (int j = i+1; j <= n; j++)
        {
            if(a[j]<a[i])
                f[1][i] = max(f[1][i], f[1][j] + 1);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, f[0][i] + f[1][i] - 1);
    }
    cout << n-ans << endl;
    return 0;
}
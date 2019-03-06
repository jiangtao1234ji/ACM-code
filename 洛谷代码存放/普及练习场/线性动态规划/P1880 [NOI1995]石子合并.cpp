#include <iostream>
#include <algorithm>
#include <cstring>
#define maxn 305

using namespace std;

int a[maxn], sum[maxn];
int dp1[maxn][maxn], dp2[maxn][maxn];
int n;

int getSum(int i, int j)
{
    return sum[j] - sum[i - 1];
}

void fun()
{
    for (int r = 2; r <= n; r++)
    {
        for (int i = 1; i <= 2 * n - r + 1; i++)
        {
            int j = i + r - 1;
            dp1[i][j] = dp1[i + 1][j] + getSum(i, j);
            dp2[i][j] = dp2[i + 1][j] + getSum(i, j);
            for (int k = i; k < j; k++)
            {
                dp1[i][j] = max(dp1[i][j], dp1[i][k] + dp1[k + 1][j] + getSum(i, j));
                dp2[i][j] = min(dp2[i][j], dp2[i][k] + dp2[k + 1][j] + getSum(i, j));
            }
        }
    }
    int minl = dp2[1][n], maxl = dp1[1][n];
    for (int i = 2; i <= n; i++)
    {
        if (dp1[i][i + n - 1] > maxl)
            maxl = dp1[i][i + n - 1];
        if (dp2[i][i + n - 1] < minl)
            minl = dp2[i][i + n - 1];
    }
    cout << minl << endl;
    cout << maxl << endl;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i + n] = a[i];
        if (i == 0)
            sum[i] = a[i];
        else
            sum[i] = sum[i - 1] + a[i];
    }
    fun();
    return 0;
}
#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10000

using namespace std;

int a[35], b[100][100], c[100][100];

void print(int l, int r)
{
    if (l > r)
        return;
    if (l == r)
    {
        cout << l << " ";
        return;
    }
    cout << c[l][r]<<" ";
    print(l, c[l][r] - 1);
    print(c[l][r] + 1, r);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i][i] = a[i];
        b[i][i - 1] = 1;
    }
    for (int i = n; i >= 1; i--)
        for (int j = i + 1; j <= n; j++)
            for (int k = i; k <= j; k++)
            {
                if (b[i][j] < (b[i][k - 1] * b[k + 1][j] + b[k][k]))
                {
                    b[i][j] = b[i][k - 1] * b[k + 1][j] + b[k][k];
                    c[i][j] = k;
                }
            }
    cout << b[1][n] << endl;
    print(1, n);
    cout << endl;
    return 0;
}
//分治法
#include<iostream>
#include<algorithm>
#include<string>
#define maxn 10000

using namespace std;

int a[maxn];

int maxsum(int *A, int x, int y)
{
    int v, L, R, maxs;
    if(y-x == 1)
        return A[x];
    int m = x + (y - x) / 2;
    maxs = max(maxsum(A, x, m), maxsum(A, m, y));
    v = 0, L = A[m - 1];
    for (int i = m - 1; i >= x; i--)
    {
        L = max(L, v += A[i]);
    }
    v = 0, R = A[m];
    for (int i = m ; i < y; i++)
    {
        R = max(R, v += A[i]);
    }
    return max(maxs, L + R);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = maxsum(a, 0, n);
    cout << ans << endl;
    return 0;
}
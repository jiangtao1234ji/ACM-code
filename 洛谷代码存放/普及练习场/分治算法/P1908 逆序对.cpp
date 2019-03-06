#include <iostream>
#include <algorithm>
#include <string>
#define maxn 500005

using namespace std;

int a[maxn], b[maxn];

long long ans;

void fun(int l, int r)
{
    if (l == r)
        return;
    int mid = l + (r - l) / 2;
    fun(l, mid);
    fun(mid + 1, r);
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r)
    {
        if (a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
            ans += mid - i + 1;
        }
    }
    while(i<=mid)
    {
        b[k++] = a[i++];
    }
    while(j<=r)
    {
        b[k++] = a[j++];
    }
    for (int i = l; i <= r; i++)
        a[i] = b[i];
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    fun(1, n);
    cout << ans << endl;
    return 0;
}
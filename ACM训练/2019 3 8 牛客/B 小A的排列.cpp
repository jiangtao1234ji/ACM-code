#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define maxn 10005
#define mod 1000000007

using namespace std;

int n, seed;
long double ans;
int a[maxn];

long long poww(long long a, long long b)
{
    long long ans1 = 1, base = a;
    while (b)
    {
        if (b & 1 != 0)
            ans1 *= base % mod;
        base *= base % mod;
        b >>= 1;
    }
    return ans1;
}

int main()
{
    cin >> n >> seed;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    double mid;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if ((j - i + 1) % 2)
            {
                mid = a[(i + j) / 2];
                ans += (double)(poww(seed, (i - 1) * n + j) * mid);
            }
            else
            {
                mid = (double)(a[(i + j) / 2] + a[(i + j) / 2 + 1]) / 2;
                ans += (double)(poww(seed, (i - 1) * n + j) * mid);
            }
        }
    }
    cout << 2 * ans << endl;
    return 0;
}
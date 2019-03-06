#include <iostream>
#include <algorithm>
#include <string>
#define maxn 30005

using namespace std;

int a[maxn];

int main()
{
    int w;
    cin >> w;
    int n;
    cin >> n;
    int l = 0, r = n - 1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (l <= r)
    {
        if (a[l] + a[r] <= w)
            l++, r--, ans++;
        else
        {
            r--;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
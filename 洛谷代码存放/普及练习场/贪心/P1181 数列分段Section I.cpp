#include <iostream>
#include <algorithm>
#include <string>
#define maxn 100001

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int k = 0, a, ans = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (k + a <= m)
            k += a;
        else
        {
            ans++;
            k = a;
        }
    }
    cout << ans << endl;

    return 0;
}
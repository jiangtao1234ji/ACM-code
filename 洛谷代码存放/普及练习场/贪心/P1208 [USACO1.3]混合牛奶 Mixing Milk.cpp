#include <iostream>
#include <algorithm>
#include <string>
#define maxn 5050

using namespace std;

struct people
{
    int p, num;
};

people a[maxn];

bool cmp(people a, people b)
{
    return a.p < b.p;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i].p >> a[i].num;
    }
    sort(a, a + m, cmp);
    // for (int i = 0; i < m; i++)
    //     cout << a[i].p << endl;
    long long ans = 0, count = 0;
    for (int i = 0; i < m; i++)
    {
        if (count + a[i].num < n)
        {
            ans += (a[i].p * a[i].num);
            count += a[i].num;
        }
        else
        {
            ans += (a[i].p * (n - count));
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
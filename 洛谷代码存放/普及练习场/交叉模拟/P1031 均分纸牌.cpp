#include<iostream>
#include<algorithm>
#include<string>
#define maxn 200

using namespace std;

int a[maxn], b[maxn];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        b[i] = b[i - 1] + a[i];
    }
    int p = b[n] / n, ans = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        if(p*i!=b[i])
            ans++;
    }
    cout << ans << endl;

    return 0;
}
#include <iostream>
#include <algorithm>
#include <string>
#define maxn 505

using namespace std;

int a[maxn], n, ans;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (a[k] < a[j] && a[k] > a[i])
                    {
                        for (int l = k + 1; l < n; l++)
                        {
                            if (a[l] > a[j])
                                ans++;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
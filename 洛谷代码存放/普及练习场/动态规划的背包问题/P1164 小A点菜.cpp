#include <iostream>
#include <algorithm>
#include <string>
#define maxn 105

using namespace std;

int a[maxn];
int b[10005];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    b[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = m; j >= a[i]; j--)
        {
            b[j] += b[j - a[i]];
        }
    }
    // for (int i = 0; i < m; i++)
    //     cout << b[i] << " ";
    cout << b[m] << endl;
    return 0;
}
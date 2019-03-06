#include <iostream>
#include <algorithm>
#include <string>
#define maxn 230

using namespace std;

int main()
{
    int a[5][5] = {2, 1, 3, 3, 1, 3, 2, 1, 3, 1, 1, 3, 2, 1, 3, 1, 1, 3, 2, 3, 3, 3, 1, 1, 2};
    int xa[maxn], xb[maxn];
    int n, na, nb, counta = 0, countb = 0;
    cin >> n >> na >> nb;
    for (int i = 0; i < na; i++)
    {
        cin >> xa[i];
    }
    for (int i = 0; i < nb; i++)
    {
        cin >> xb[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[xa[i % na]][xb[i % nb]] == 1)
        {
            countb++;
        }
        else if (a[xa[i % na]][xb[i % nb]] == 2 || a[xa[i % na]][xb[i % nb]] == 0)
        {
            continue;
        }
        else
        {
            counta++;
        }
        // cout << a[xa[i % na]][xb[i % nb]] << endl;
    }
    cout << counta << " " << countb << endl;

    return 0;
}
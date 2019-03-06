#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10000

using namespace std;

int n, m, k;

int main()
{
    string a = "R", b = "L";
    cin >> n >> m >> k;
    if (!(k % (2 * m)))
    {
        cout << k / (2 * m) << " " << m << " ";
        cout << a;
    }
    else
    {
        int x = k / (2 * m) + 1;
        int y = k % (2 * m);
        if (y % 2 == 0)
        {
            cout << x << " " << y / 2 << " ";
            cout << a;
        }
        else
        {
            cout << x << " " << y / 2 + 1 << " ";
            cout << b;
        }
    }
    return 0;
}
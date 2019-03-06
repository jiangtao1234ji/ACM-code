#include <iostream>
#include <algorithm>
#include <string>
#define maxn 100010

using namespace std;

struct people
{
    int d;
    string name;
};

people p[maxn];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].d >> p[i].name;
    }
    int a, s, be = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> s;
        if (p[be].d == 0)
        {
            if (a == 0)
            {
                be = (be + n - s) % n;
            }
            else
            {
                be = (be + s) % n;
            }
        }
        else
        {
            if (a == 0)
            {
                be = (be + s) % n;
            }
            else
            {
                be = (be + n - s) % n;
            }
        }
    }
    cout << p[be].name << endl;
    return 0;
}
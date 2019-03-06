#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#define maxn 10000

using namespace std;

int main()
{
    int p1, p2, p3;
    char a[300];
    scanf("%d%d%d%s", &p1, &p2, &p3, a);
    int i = 0;
    char be, ed, now, p, j;
    while (a[i])
    {
        be = a[i - 1], ed = a[i + 1], now = a[i];
        if (now == '-' && ed > be && (be >= '0' && ed <= '9' || be >= 'a' && ed <= 'z'))
        {
            for (p3 == 1 ? j = be + 1 : j = ed - 1; p3 == 1 ? j < ed : j > be; p3 == 1 ? j++ : j--)
            {
                p = j;
                if (p1 == 2)
                    p = (p >= 'a') ? p - 32 : p;
                else if (p1 == 3)
                    p = '*';
                for (int k = 0; k < p2; k++)
                    cout << p;
            }
        }
        else
        {
            cout << now;
        }
        i++;
    }
    cout << endl;
    return 0;
}
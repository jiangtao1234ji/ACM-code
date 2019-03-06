#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10000

using namespace std;

int hh1[maxn], ds1[maxn];

int main()
{
    char a;
    int hh = 0, ds = 0;
    int hh2 = 0, ds2 = 0, count = 0;
    while (cin >> a)
    {
        if (a == 'E')
        {
            cout << hh << ":" << ds << endl;
            hh1[count] = hh2;
            ds1[count] = ds2;
            count++;
            break;
        }
        if (a == 'W')
        {
            hh++;
            hh2++;
        }
        if (a == 'L')
        {
            ds++;
            ds2++;
        }
        if ((hh>=11 && hh - ds >= 2) || (ds>=11 && ds - hh >=2))
        {
            cout << hh << ":" << ds << endl;
            hh = 0, ds = 0;
        }
        if ((hh2 >= 21 && hh2 - ds2 >= 2) || (ds2 >= 21 && ds2 - hh2 >= 2))
        {
            hh1[count] = hh2;
            ds1[count] = ds2;
            hh2 = 0;
            ds2 = 0;
            count++;
        }
    }
    cout << endl;
    for (int i = 0; i < count; i++)
        cout << hh1[i] << ":" << ds1[i] << endl;

    return 0;
}
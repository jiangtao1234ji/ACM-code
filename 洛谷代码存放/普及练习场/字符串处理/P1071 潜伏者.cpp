#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10000

using namespace std;

bool yuan[27], mi[27];
int c[27];

int main()
{
    string a, b, d;
    cin >> a;
    cin >> b;
    cin >> d;
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (!mi[a[i] - 'A' + 1] && !yuan[b[i] - 'A' + 1])
        {
            c[a[i] - 'A' + 1] = b[i];
            mi[a[i] - 'A' + 1] = yuan[b[i] - 'A' + 1] = 1;
            count++;
        }
        else if (c[a[i] - 'A' + 1] != b[i])
        {
            cout << "Failed" << endl;
            return 0;
        }
    }
    if (count != 26)
        cout << "Failed" << endl;
    else
    {
        for (int i = 0; i < d.size(); ++i)
        {
            printf("%c", c[d[i] - 'A' + 1]);
        }
    }

    return 0;
}
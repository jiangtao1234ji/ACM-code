#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10000

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 1;
    char a = '0', b = '0', c = '0';
    while (n--)
    {
        cin >> c;
        if ((a == 'L' && c == 'R') || (a == 'R' && c == 'L') || (a == 'U' && c == 'D') || (a == 'D' && c == 'U'))
        {
            cnt++;
            a = '0', c = '0';
        }
        if ((b == 'L' && c == 'R') || (b == 'R' && c == 'L') || (b == 'U' && c == 'D') || (b == 'D' && c == 'U'))
        {
            cnt++;
            b = '0', c = '0';
        }
        if (!((a == 'L' && c == 'R') || (a == 'R' && c == 'L') || (a == 'U' && c == 'D') || (a == 'D' && c == 'U')) ||
            !((b == 'L' && c == 'R') || (b == 'R' && c == 'L') || (b == 'U' && c == 'D') || (b == 'D' && c == 'U')))
        {
            if (a == '0')
                a = c;
            if (b == '0')
                b = c;
        }
    }
    cout << cnt << endl;
    return 0;
}
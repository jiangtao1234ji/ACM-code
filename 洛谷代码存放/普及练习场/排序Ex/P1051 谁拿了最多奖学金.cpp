#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10000

using namespace std;

int main()
{
    string name, anss;
    int qimo, banji, lunwen, n, ans = 0, money, max1 = -1;
    char xuesheng, xibu;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        money = 0;
        cin >> name >> qimo >> banji >> xuesheng >> xibu >> lunwen;
        if (qimo > 80 && lunwen >= 1)
            money += 8000;
        if (qimo > 85 && banji > 80)
            money += 4000;
        if (qimo > 90)
            money += 2000;
        if (qimo > 85 && xibu == 'Y')
            money += 1000;
        if (banji > 80 && xuesheng == 'Y')
            money += 850;

        ans += money;

        if (money > max1)
        {
            max1 = money;
            anss = name;
        }
    }
    cout << anss << endl;
    cout << max1 << endl;
    cout << ans << endl;

    return 0;
}
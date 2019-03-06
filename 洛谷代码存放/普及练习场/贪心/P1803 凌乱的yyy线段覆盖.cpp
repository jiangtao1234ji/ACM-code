#include <iostream>
#include <algorithm>
#include <string>
#define maxn 1000005

using namespace std;

struct text
{
    int be, ed;
};

text a[maxn];

bool cmp(text a, text b)
{
    return a.ed < b.ed;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i].be >> a[i].ed;
    sort(a, a + n, cmp);
    // for (int i = 0; i < n; i++)
    //     cout << a[i].be << " " << a[i].ed << endl;
    int count = 1;
    int ned = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[ned].ed <= a[i].be)
        {
            ned = i;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
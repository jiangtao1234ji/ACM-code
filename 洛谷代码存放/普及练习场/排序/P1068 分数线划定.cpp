#include <iostream>
#include <algorithm>
#include <string>
#define maxn 5005

using namespace std;

struct people
{
    int k;
    int s;
};

bool cmp(people a, people b)
{
    if(a.s == b.s)
        return a.k < b.k;
    else
        return a.s > b.s;
}

people a[maxn];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i].k >> a[i].s;
    sort(a, a + n, cmp);
    int num = m * 1.5;
    int fen = a[num - 1].s, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].s >= fen)
            count++;
    }
    cout << fen << " " << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << a[i].k << " " << a[i].s << endl;
    }

        return 0;
}
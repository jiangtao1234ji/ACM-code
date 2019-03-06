#include <iostream>
#include <algorithm>
#include <string>
#define maxn 320

using namespace std;

struct stu
{
    int yu, shu, yin, zong, id;
};

stu a[maxn];

bool cmp(stu a, stu b)
{
    if (a.zong == b.zong)
    {
        if (a.yu == b.yu)
            return a.id < b.id;
        return a.yu > b.yu;
    }
    return a.zong > b.zong;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].yu >> a[i].shu >> a[i].yin;
        a[i].id = i;
        a[i].zong = a[i].yu + a[i].shu + a[i].yin;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= 5; i++)
    {
        cout << a[i].id << " " << a[i].zong<<endl;
    }
    return 0;
}
#include <iostream>
#include <algorithm>
#include <cstring>
#define maxn 10005

using namespace std;

struct peo
{
    int l, r;
    long long z;
};

peo c[maxn];

struct int_l
{
    int data[maxn];
    int_l()
    {
        memset(data, 0, sizeof(data));
        data[0] = 1;
    }
    int_l(int x)
    {
        memset(data, 0, sizeof(data));
        data[0] = 1;
        int i = 1;
        while (x)
        {
            data[i++] = x % 10;
            x /= 10;
        }
        data[0] = --i;
    }
    int_l operator*(const int &x)
    {
        int_l a;
        int len;
        a.data[0] = data[0];
        for (int i = 1; i <= data[0]; i++)
            a.data[i] = data[i] * x;
        for (int i = 1; i <= a.data[0] || a.data[i]; len = ++i)
        {
            a.data[i + 1] += a.data[i] / 10;
            a.data[i] %= 10;
        }
        a.data[len] ? a.data[0] = len : a.data[0] = --len;
        return a;
    }
    int_l operator/(const int &x)
    {
        int_l a;
        a.data[0] = data[0];
        int rest = 0;
        for (int i = data[0]; i >= 1; i--)
        {
            rest = rest * 10 + data[i];
            a.data[i] = rest / x;
            rest %= x;
        }
        while (!a.data[a.data[0]] && a.data[0] > 1)
            a.data[0]--;
        return a;
    }
    bool operator<(const int_l &x) const
    {
        if (data[0] == x.data[0])
        {
            int i;
            for (i = data[0]; data[i] == x.data[i] && i > 1; i--)
                ;
            if (i >= 1)
                return data[i] < x.data[i];
            else
                return false;
        }
        else
            return data[0] < x.data[0];
    }
};
ostream &operator<<(ostream &out, const int_l &x)
{
    for (int i = 1; i <= x.data[0]; i++)
        out << x.data[x.data[0] - i + 1];
    return out;
}

bool cmp(peo a, peo b)
{
    return a.z < b.z;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> c[i].l >> c[i].r;
        c[i].z = c[i].l * c[i].r;
    }
    sort(c + 1, c + n + 1, cmp);
    int_l ans;
    int_l k(1);
    for (int i = 1; i <= n; i++)
    {
        if (c[i - 1].l == 0)
            break;
        k = k * c[i - 1].l;
        int_l temp;
        temp = k / c[i].r;
        if (ans < temp)
            ans = temp;
    }
    cout << ans << endl;
    return 0;
}
#include<iostream>
#include<algorithm>
#include<string>
#define maxn 1050

using namespace std;

struct peo
{
    int id, t;
};

peo a[maxn];

bool cmp(peo a, peo b)
{
    return a.t < b.t;
}

int b[maxn];

int main()
{
    int n;
    cin >> n;
    long double ans=0;
    for (int i = 1; i <= n; i++)
    {
        a[i].id = i;
        cin >> a[i].t;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n;  i++)
        cout << a[i].id << " ";
    cout << endl;
    for (int i = 1; i <=n; i++)
    {
        b[i] += a[i].t + b[i-1];
    }
    for (int i = 1; i <n; i++)
    {
        ans += b[i];
    }
    printf("%.2llf\n", ans / n);
    return 0;
}
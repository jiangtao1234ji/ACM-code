#include <iostream>
#include <algorithm>
#include <string>
#define maxn 20010

using namespace std;

int e[15];

struct people
{
    int id;
    int w;
    int c;
};

bool cmp(people a, people b)
{
    if(a.w == b.w)
        return a.id < b.id;
    return a.w > b.w;
}

people a[maxn];

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= 10; i++)
    {
        cin >> e[i];
    }
    for (int i = 1; i <= n; i++)
    {
        a[i].id = i;
        
        cin >> a[i].w;
        a[i].w += e[a[i].c];
    }
    sort(a+1, a + n+1, cmp);
    for (int i = 1; i <= n; i++)
    {
        a[i].c = (i - 1) % 10 + 1;
        a[i].w += e[a[i].c];
    }
    sort(a+1, a + n+1, cmp);
    for (int i = 1; i <= k; i++)
        cout << a[i].id << " ";
    cout << endl;

    return 0;
}
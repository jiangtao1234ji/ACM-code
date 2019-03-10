#include <bits/stdc++.h>
#define maxn 10000005
#define ll long long

using namespace std;

int n, m, prime[maxn], cnt;
bool vis[maxn];
bool is_prime[maxn];

void prime_select()
{
    for (int i = 2; i <= n; i++)
    {
        if (!vis[i])
        {
            prime[cnt++] = i;
            is_prime[i] = 1;
        }
        for (int j = 0; j < cnt && i * prime[j] <= n; j++)
        {
            vis[i * prime[j]] = 1;
            if (i % prime[j] == 0)
                break;
        }
    }
}

int main()
{
    cin >> n >> m;
    prime_select();
    int x;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        if (is_prime[x])
            cout << "Yes" << endl;
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
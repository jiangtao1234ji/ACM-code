#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#define maxn 10000

using namespace std;

void dfs(int n)
{
    int ans;
    if (n == 0)
        return;
    for (int i = 0; i <= 15; i++)
    {
        ans = i;
        int a = pow(2, i);
        if(a>n)
        {
            ans--;
            break;
        }
    }
    if(ans == 0)
        cout << "2(0)";
    if(ans == 1)
        cout << "2";
    if(ans>1)
    {
        cout << "2(";
        dfs(ans);
        cout << ")";
    }
    int a = pow(2, ans);
    if(n!=a)
    {
        cout << "+";
        dfs(n - a);
    }
}

int main()
{
    int n;
    cin >> n;
    dfs(n);
    return 0;
}
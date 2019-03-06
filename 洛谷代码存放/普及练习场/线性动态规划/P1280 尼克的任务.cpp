#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
#define maxn 10005

using namespace std;

int n, k, p, t, f[maxn];
vector<int> b[maxn];

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin>>p>>t;
        b[p].push_back(t);
    }
    for (int i = n; i >= 1; i--)
    {
        if(b[i].empty())
        {
            f[i] = f[i + 1] + 1;
        }
        else
        {
            for (int j = 0; j < b[i].size(); j++)
            {
                f[i] = max(f[i], f[i + b[i][j]]);
            }
        }
        
    }
    cout << f[1] << endl;
    return 0;
}
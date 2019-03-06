#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#define maxn 10005

using namespace std;

int main()
{
    int n, a;
    priority_queue<int, vector<int>, greater<int>> q;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        q.push(a);
    }
    long long ans = 0;
    while (q.size() != 1)
    {
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        ans += a + b;
        q.push(a + b);
    }
    cout << ans << endl;
    return 0;
}
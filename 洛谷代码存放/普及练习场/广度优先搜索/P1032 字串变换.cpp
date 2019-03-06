#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
#define maxn 1000

using namespace std;

string a, b;
string x[maxn], y[maxn];
int cnt;
map<string, int> c;
queue<string> q;

bool eq(string s, int be, int to)
{
    string &tmp = x[to];
    if (s.size() - be + 1 < x[to].size())
        return false;
    for (int i = be; i - be < tmp.size(); i++)
    {
        if (s[i] != tmp[i - be])
            return false;
    }
    return true;
}
string change(string s, int be, int to)
{
    if (eq(s, be, to))
    {
        string neww = s.substr(0, be) + y[to] + s.substr(x[to].size() + be, s.size());
        return neww;
    }
    else
        return "";
}

int bfs()
{
    q.push(a);
    c[a] = 0;
    while (!q.empty())
    {
        string tmp = q.front();
        q.pop();
        for (int i = 0; i < tmp.size(); i++)
        {
            for (int j = 0; j < cnt; j++)
            {
                string neww = change(tmp, i, j);
                if (neww == "")
                    continue;
                if (c.count(neww))
                    continue;
                if (c[tmp] + 1 > 10)
                    return 0;
                q.push(neww), c[neww] = c[tmp] + 1;
                if (neww == b)
                    return c[tmp] + 1;
            }
        }
    }
}

int main()
{
    cin >> a >> b;
    while (cin >> x[cnt] >> y[cnt])
        cnt++;
    int ans = 0;
    ans = bfs();
    if (ans > 0 && ans <= 10)
        cout << ans << endl;
    else
        cout << "NO ANSWER!" << endl;
    return 0;
}
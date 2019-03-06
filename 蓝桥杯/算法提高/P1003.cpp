#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#define maxn 10000

using namespace std;

vector<string> a;
vector<string> b;
vector<string> m;

bool vis[maxn];

bool cmp(string x, string y)
{
    int count = 0;
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < y.size(); j++)
        {
            if (x[i] == y[j] && !vis[j])
            {
                vis[j] = 1;
                count++;
                break;
            }
        }
    }
    if (count == x.size() && count == y.size())
        return true;
    else
        return false;
}

int main()
{
    string tmp;
    getline(cin, tmp);
    string c = "";
    for (int i = 0; i < tmp.size(); i++)
    {
        if (tmp[i] != ' ')
        {
            c += tmp[i];
        }
        else
        {
            a.push_back(c);
            // cout << c << endl;
            c = "";
        }
    }
    a.push_back(c);
    getline(cin, tmp);
    c = "";
    for (int i = 0; i < tmp.size(); i++)
    {
        if (tmp[i] != ' ')
        {
            c += tmp[i];
        }
        else
        {
            b.push_back(c);
            // cout << c << endl;
            c = "";
        }
    }
    b.push_back(c);
    int d[a.size()] = {0};
    for (int i = 0; i < b.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (cmp(a[j], b[i]) && !d[j])
            {
                d[j] = 1;
                m.push_back(a[j]);
            }
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < m.size(); j++)
        {
            if (a[i] == m[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
    return 0;
}
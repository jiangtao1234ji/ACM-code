#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define maxn 10000

using namespace std;

string a, b;

struct node
{
    char x, y;
    node(char x, char y) : x(x), y(y){};
};

char k1[26], k2[26];
int cnt, count1;
vector<node> v;
int main()
{
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
            continue;
        else
        {
            if (!k1[a[i] - 'a'] && !k2[b[i] - 'a'])
            {
                k1[a[i] - 'a'] = b[i];
                k2[b[i] - 'a'] = a[i];
                cnt++;
                v.push_back(node(a[i], b[i]));
            }
            else if (k2[b[i] - 'a'] && k1[a[i] - 'a'] && (k1[a[i] - 'a'] == b[i]) &&
                     (k2[b[i] - 'a'] == a[i]))
                continue;
            else
            {
                cout << "-1" << endl;
                return 0;
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[i].x == v[j].y && v[i].y == v[j].x)
            {
                count1++;
            }
        }
    }
    cout << cnt - count1 << endl;
    for (int i = 0; i < v.size(); i++)
    {
        int sign = 0;
        for (int j = 0; j < i; j++)
        {
            if (v[i].x == v[j].y && v[i].y == v[j].x)
            {
                sign = 1;
            }
        }
        if (!sign)
            cout << v[i].x << " " << v[i].y << endl;
    }
    return 0;
}
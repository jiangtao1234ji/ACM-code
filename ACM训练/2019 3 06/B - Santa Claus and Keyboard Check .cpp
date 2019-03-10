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

char k[26];
int cnt, count1;
vector<node> v;
int main()
{
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (!k[a[i] - 'a'] && !k[b[i] - 'a'])
        {
            k[a[i] - 'a'] = b[i];
            k[b[i] - 'a'] = a[i];
            if (a[i] != b[i])
            {
                cnt++;
                v.push_back(node(a[i], b[i]));
            }
        }
        else if (k[a[i] - 'a'] != b[i] || k[b[i] - 'a'] != a[i])
        {
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << cnt << endl;
    int len = v.size();
    for (int i = 0; i < len; i++)
        cout << v[i].x << " " << v[i].y << endl;
    return 0;
}
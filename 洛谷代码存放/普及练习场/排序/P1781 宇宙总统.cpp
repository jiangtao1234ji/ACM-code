#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10000

using namespace std;

bool cmp(string a, string b)
{
    if (b == "0")
        return true;
    int c = a.length();
    for (int i = 0; i < c; i++)
    {
        if(a[i] == b[i])
            continue;
        if (a[i] < b[i])
            return false;
        if(a[i]>b[i])
            return true;
    }
}

int main()
{
    string a[30];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        int num1 = a[i].length();
        if (num1 > num)
            num = a[i].size();
    }
    string b[30];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int num1 = a[i].length();
        if (num1 == num)
            b[count++] = a[i];
    }
    string ans;
    ans += '0';
    for (int i = 0; i < count; i++)
    {
        if (cmp(b[i], ans))
        {
            ans = b[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ans)
        {
            cout << i + 1 << endl;
            cout << ans << endl;
            break;
        }
    }
    return 0;
}
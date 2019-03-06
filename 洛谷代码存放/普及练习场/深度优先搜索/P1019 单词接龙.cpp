#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10000

using namespace std;

string s[30];
int vis[30], length, n;

int canlink(string str1, string str2)
{
    for (int i = 1; i < min(str1.length(), str2.length()); i++)
    {
        int flag = 1;
        for (int j = 0; j < i; j++)
            if (str1[str1.length() - i + j] != str2[j])
                flag = 0; 
        if (flag)
            return i; 
    }
    return 0; 
}
void solve(string strnow, int lengthnow)
{
    length = max(lengthnow, length); 
    for (int i = 0; i < n; i++)
    {
        if (vis[i] >= 2)
            continue;                   
        int c = canlink(strnow, s[i]); 
        if (c > 0)
        { 
            vis[i]++;
            solve(s[i], lengthnow + s[i].length() - c);
            vis[i]--;
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> s[i];
    }
    solve(' '+s[n], 1);
    cout << length << endl;
    return 0;
}
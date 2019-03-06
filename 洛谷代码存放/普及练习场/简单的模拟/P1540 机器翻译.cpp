#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define maxn 10000

using namespace std;

int main()
{
    int n, m, count = 0, b;
    cin >> m >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        if (find(a.begin(), a.end(), b) == a.end())
        {
            a.push_back(b);
            count++;
        }
        if (a.size() > m)
            a.erase(a.begin());
    }
    cout << count << endl;

    return 0;
}
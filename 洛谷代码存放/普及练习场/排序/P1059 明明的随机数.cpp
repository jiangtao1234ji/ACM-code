#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#define maxn 10000

using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        s.insert(a);
    }
    // sort(s.begin(), s.end());
    cout << s.size() << endl;
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
        cout << *it << " ";
    cout << endl;
    return 0;
}
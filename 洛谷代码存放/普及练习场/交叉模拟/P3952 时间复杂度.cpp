#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10000

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int l;
        char c[10];
        string a;
        cin >> l >> a;
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> c[j];
                if(c[j] == 'E')
                    break;
            }
            
        }
    }
    return 0;
}
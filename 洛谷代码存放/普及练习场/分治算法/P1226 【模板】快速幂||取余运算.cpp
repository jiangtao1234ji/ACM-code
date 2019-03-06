#include <iostream>
#include <algorithm>
#include <string>
#define maxn 10000

using namespace std;

long long b, p, k, s;

long long quick(long long a, long long b)
{
    long long ans = 1, base = a;
    while (b > 0)
    {
        if (b & 1)
        {
            ans *= base;
            ans %= k;
        }
        base *= base;
        base %= k;
        b >>= 1;
    }
    return ans;
}

int main()
{
    cin >> b >> p >> k;
    if (p == 0 && k == 1)
        cout << b << "^" << p << " mod " << k << "=" << 0 << endl;
    else
        cout << b << "^" << p << " mod " << k << "=" << quick(b, p) << endl;
    return 0;
}
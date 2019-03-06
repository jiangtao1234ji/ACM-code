#include <iostream>

using namespace std;

int main()
{
	string str;
	while(cin>>str)
	{
		long long ans = 0, weight = 1;
		for (int i = str.size() - 1; i >= 0; i--)
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				ans += (str[i] - '0') * weight;
			}
			else ans += (str[i] - 'A' + 10) * weight;
			weight *= 16;
		}
		cout <<ans <<endl;
	}
	return 0;
}


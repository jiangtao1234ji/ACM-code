#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int n,m;
	int cnt;
	int k;
	int c;
	while(cin>>c)
	{
		while(c--)
		{
			cin>>m>>n;
			cnt = 0;
			k = 0;
			while(n && m)
			{
				if(n > m)
				{
					k = n/m;
					n %= m;
					cnt++;
					if(k > 1) 
						break;
				}
				else
				{
					k = m/n;
					m %= n;
					cnt++;
					if(k > 1) 
						break;
				}
			}
			if(cnt % 2 == 1)
			{
				printf("Stan wins\n");
			}
			else
			{
				printf("Ollie wins\n");
			}
		}
	}
	return 0;
}


#include<iostream>
#include<string>
#include<algorithm>
#define maxn 200500

using namespace std;

char a[maxn];
int ax[maxn], ay[maxn];

int main()
{
	int n, x, y;
	for(int i=0; i<n; ++i)
		cin>>a[i];
	cin>>x>>y;
	ax[0] = 0;
	ay[0] = 0;
	for(int i=1; i<=n; i++)
	{
		sx[i] = sx[i - 1] + (s[i] == 'L' ? -1 : (s[i] == 'R' ? 1 : 0));
		sy[i] = sy[i - 1] + (s[i] == 'D' ? -1 : (s[i] == 'U' ? 1 : 0));

	}

	return 0;
}


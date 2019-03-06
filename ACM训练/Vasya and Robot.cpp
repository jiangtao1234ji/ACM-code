#include<iostream>
#include<string>
#include<algorithm>
#define maxn 1000000

using namespace std;

char a[maxn];
int ax[maxn], ay[maxn];

int main()
{
	int n, x, y;
	cin>>n;
	for(int i=1; i<=n; ++i)
		cin>>a[i];
	cin>>x>>y;
	ax[0] = 0;
	ay[0] = 0;
	for(int i=1; i<=n; i++)
	{
		ax[i] = ax[i - 1] + (a[i] == 'L' ? -1 : (a[i] == 'R' ? 1 : 0));
		ay[i] = ay[i - 1] + (a[i] == 'D' ? -1 : (a[i] == 'U' ? 1 : 0));
	}
	int l=0, r=n, ans=-1;
	while(l<=r)
	{
		int mid = (l+r)/2;
		int flag = false;
		for(int i=1; i+mid-1<=n; ++i)
		{
			int xx = ax[n]-ax[i+mid-1]+ax[i-1];
			int yy = ay[n]-ay[i+mid-1]+ay[i-1];
			int tx = x- xx;
			int ty = y -yy;
			if(abs(tx)+abs(ty)<=mid && (mid-abs(tx)-abs(ty))%2==0)
			{
				ans = mid;
				r = mid - 1;
				flag = true;
				break;
			}
		}
		if(!flag)
			l=mid+1;
	}
	if(ans == -1)
		cout<<"-1"<<endl;
	else
		cout<<ans<<endl;

	return 0;
}


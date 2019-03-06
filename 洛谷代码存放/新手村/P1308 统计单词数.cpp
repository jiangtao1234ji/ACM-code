#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	string a;
	string b;
	getline(cin,a);
	getline(cin,b);
	int ans = 0, fir;
	int la = a.length(), lb = b.length();
	int count = 0;
	for(int i=0; i<lb; i++)
	{
		if(b[i] != ' ')
		{
			for(int j=0; j<la; j++)
			{
				if(a[j] == b[i+j] || abs(a[j] - b[i+j]) == 32)
					count++;
			}
			if(count == la && !(b[i+la]>='A'&&b[i+la]<='z'))
			{
				ans++;
				if(ans == 1)
					fir = i;
				i+=la;
				count = 0;
			}
			else
			{
				while(b[i]!=' ')
				{
					i++;
					if(i == lb)
						break;
				}
				count = 0;
			}
		}
	}
	if(ans != 0)
		cout<<ans<<" "<<fir<<endl;
	else
		cout<<"-1"<<endl;
	return 0;
}


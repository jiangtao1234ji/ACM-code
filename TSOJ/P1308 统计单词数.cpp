#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	string a, b;
	getline(cin,a);
	int ans = 0;
	getline(cin,b);
	int count = 0;
	for(int i=0; i<b.length(); i++)
	{
		if(b[i] != ' ')
		{
			for(int j=0; j<a.length(); j++)
			{
				if(a[j] == b[i+j] || abs(a[j] - b[i+j]) == 32)
					count++;
			}
			if(count == a.length() && b[i+a.length()] == ' ')
			{
				ans++;
				i+=a.length();
			}
			else
			{
				while(b[i]!=' ')
				{

					i++;
				}
			}
		}
	}
	cout<<ans<<endl;;
	return 0;
}


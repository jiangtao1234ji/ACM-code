#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	string s, t;
	while(cin>>s>>t)
	{
		bool flag = false;
		for(int i=0; i<s.length(); i++)
		{
			int num, ans=0, count=0;
			if(t.find(t.begin(), t.end(), s[i]) == t.end())
			{
				cout<<"No"<<endl;
				break;
			}
			else
			{
				num = t.find(t.begin(), t.end(), s[i]);
				t.erase(t.begin()+num);
				if(ans <= num)
				{
					ans = num;
					count++;
				}
				else
					break;
			}
		}
	}
	return 0;
}


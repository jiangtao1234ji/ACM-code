#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int maxn = 100000 + 5;
int last, cur, next1[maxn];
char s[maxn];

int main()
{
	while(scanf("%s", s+1) == 1)
	{
		int n = strlen(s+1);
		last = cur = 0;
		next1[0] = 0;
		for(int i=1; i<=n; ++i)
		{
			char ch = s[i];
			if(ch == '[')
				cur = 0;
			else if(ch == ']')
				cur = last;
			else
			{
				next1[i] = next1[cur];
				cout<<"n["<<i<<"] = "<<"n["<<cur<<"] = "<<next1[cur]<<endl;
				next1[cur] = i;
				cout<<"n["<<cur<<"] = "<<i<<endl;
				if(cur == last)
					last = i;
				cur = i;
			}
		}
		for(int i=next1[0]; i != 0; i = next1[i])

			cout<<s[i];
		cout<<endl;
	}
	return 0;
}


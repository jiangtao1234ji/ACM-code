#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	bool flag[2000];
	int n, m;
	while(cin>>n>>m)
	{
		for(int i=1; i<=m; i++)
			flag[i] = true;
		int count=0, num=0;
		for(int i=1; i<=m; i++)
		{
			if(flag[i] == true)
			{
				num++;
				if(num == n)
				{
					flag[i] = false;
					cout<<i<<" ";
					count++;
					num=0;
				}
			}
			if(i >= m)
				i=0;
			if(count == m)
				break;
		}
		cout<<endl;
	}
	return 0;
}


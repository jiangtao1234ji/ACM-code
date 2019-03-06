#include<iostream>
#include<string>
#include<algorithm>
#include<list>

using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	list<int> a;
	for(int i=1; i<=n; i++)
	{
		a.push_back(i) ;
	}
	for(int i=0; i<m; i++)
	{
		char b;
		int c, d;
		cin>>b>>c>>d;
		if(b=='A')
		{
			a.remove(c);
			for(list<int>::iterator it=a.begin(); it!=a.end(); ++it)
			{
				if(*it==d)
				{
					a.insert(it,c);
					break;
				}
			}
		}
		else if(b=='B')
		{
			a.remove(c);
			for(list<int>::iterator it=a.begin(); it!=a.end(); ++it)
			{
				if(*it==d)
				{
					a.insert(++it,c);
					break;
				}
			}
		}
	}
	for(list<int>::iterator it=a.begin(); it!=a.end(); ++it)
	{
		if(it<a.end())
			cout<<*it<<" ";
		else
			cout<<*it<<endl;
		
	}
	a.clear();

	return 0;
}


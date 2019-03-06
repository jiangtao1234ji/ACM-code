#include<iostream>
#include<set>

using namespace std;

int main()
{
	int n, temp;
	set<int> m;
	while(cin>>n)
	{
		int count=0;
		for(int i=0; i<n; i++)
		{
			cin>>temp;
			m.insert(temp);
		}
		cout<<m.size()<<endl;
		for(set<int>::const_iterator  it = m.begin(); it != m.end(); ++it)
		{
			count++;
			if(count<m.size())
				cout<< *it <<" ";
			else
				cout<< *it;
		}
		cout<<endl;
		m.clear();
	}
	return 0;
}

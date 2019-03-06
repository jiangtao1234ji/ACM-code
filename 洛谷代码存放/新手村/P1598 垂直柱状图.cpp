#include<iostream>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

map<char, int> m;

int main()
{
	char c;
	while(cin>>c)
	{
		if(c>='A' && c<='Z')
			m[c]++;
	}
	int maxc = -1;
	for(map<char, int>::iterator i = m.begin(); i != m.end(); ++i)
	{
		if(i->second > maxc)
			maxc = i->second;
	}
	for (int i = 0; i < maxc; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (i >= maxc - m[j + 'A'])
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	for(map<char, int>::iterator i = m.begin(); i != m.end(); ++i)
		cout<<i->first<<" ";
	return 0;
}


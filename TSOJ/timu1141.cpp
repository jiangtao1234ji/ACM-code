#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

const int maxn=150000;

int main()
{
	string a;
	string a1;
	string a2;
	char news[maxn];
	string b="END";
	string c="ENDOFINPUT";
	while(cin>>a&&a!=c)
	{
		 cin.get();
		getline(cin,a1);
		int k=0;
		for(int i=0; i<a1.size(); ++i)
		{
			if(isalpha(a1[i]))
			{
				if(a1[i]<='E')
				{
					news[i]='Z'-(4-a1[i]+'A');
				}
				else
					news[i]=a1[i]-5;
			}
			else
			{
				news[i]=a1[i];
			}

		}
		cin>>a2;
		for(int i=0; i<a1.size(); ++i)
			cout<<news[i];
		cout<<endl;
	}
	return 0;
}


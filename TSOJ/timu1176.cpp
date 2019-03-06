#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int N, W, S, j, i;
	vector<string> v;
	while(cin>>N)
	{
		for(i=0; i<N; i++)
		{
			string name;
			cin>>name;
			v.push_back(name);
		}
		scanf("%d,%d", &W, &S);
		j=W-1;
		while(!v.empty())
		{
			for(i=0; i<S-1; i++)
			{
				j++;
				if(j>=v.size())
				{
					j=0;
				}
			}
			cout<<v[j]<<endl;
			v.erase(v.begin()+j);
		}
	}
	return 0;
}

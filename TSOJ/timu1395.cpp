#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

vector<int> v;
void permutation(int N)
{
	if(v.size()==N)
	{
		for(int i = 0; i<N; i++)
		{
			cout<<v[i];
		}
		cout<<endl;
	}
	for(int i = 1; i<=N; i++)
	{
		if(find(v.begin(),v.end(),i)==v.end())
		{
			v.push_back(i);
			permutation(N);
			v.pop_back();
		}
	}
}
int main()
{
	int N;
	while(cin>>N)
	{
		permutation(N);
	}
	return 0;	
}

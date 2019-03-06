#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#define F_PATH "C:\\Users\\½¯ÌÎ\\Desktop\\1.txt"

using namespace std;

int Greedy(vector<int> a, vector<vector<int> > b)
{
	vector<int> sheng;
	vector<int> yi;
	int min1=100000000;
	//for(int i=0; i<a.size(); ++i)
	//	cout<<sheng[i]<<" ";
	for(int n=0; n<b.size(); ++n)
	{
		for(int i=0; i<a.size(); ++i)
			sheng.push_back(a[i]);
		int c=0, d=0;
		yi.clear();
		yi.push_back(n);
		for(int i=0; i<b[n].size(); ++i)
		{
			for(int j=0; j<sheng.size(); ++j)
			{
				if(b[n][i] == sheng[j])
					sheng.erase(sheng.begin()+j);
			}
		}
		//for(int i=0; i<a.size(); ++i)
		//	cout<<sheng[i]<<" ";
		while(!sheng.empty())
		{
			int count=0;
			int maxn=0;
			int temp=0;
			for(int i=0; i<b.size(); ++i)
			{
				if(i != n)
				{
					for(int j=0; j<b[i].size(); ++j)
					{
						for(int k=0; k<sheng.size(); ++k)
						{
							if(b[i][j] == sheng[k])
								count++;
						}
					}
					if(count>maxn)
					{
						maxn=count;
						temp=i;
					}
					count=0;
				}
			}
			for(int i=0; i<b[temp].size(); ++i)
			{
				for(int j=0; j<sheng.size(); ++j)
				{
					if(b[temp][i] == sheng[j])
						sheng.erase(sheng.begin()+j);
				}
			}
			yi.push_back(temp);
		}
		if(yi.size()<min1)
			min1=yi.size();
	}
	return min1;
}

int main()
{
	int n, m;
	while(cin>>n>>m)
	{
		vector<int> a;
		vector<vector<int> > b;
		vector<int> v;
		int skill, num;
		FILE * fp = NULL;
		fp = fopen(F_PATH, "r");
		if (NULL == fp)
		{
			return -1;
		}
		for(int i=0; i<n; ++i)
		{
			cin>>skill;
			a.push_back(skill);
		}
		for(int i=0; i<m; ++i)
		{
			v.clear();
			cin>>num;
			for(int j=0; j<num; ++j)
			{
				cin>>skill;
				v.push_back(skill);
			}
			b.push_back(v);
		}
		fclose(fp);
		fp = NULL;
		/*for(int i=0; i<m; ++i)
		{
			for(int j=0; j<b[i].size(); ++j)
				cout<<b[i][j]<<" ";
			cout<<endl;
		}
		*/
		cout<<Greedy(a,b)<<endl;
	}
	return 0;
}


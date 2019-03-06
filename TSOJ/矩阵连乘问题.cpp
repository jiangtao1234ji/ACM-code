#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int fun(vector<int> m)
{
	int n=m.size()-1;
	int w[n][n];
	for(int i=1; i<=n; ++i)
		w[i][i]=0;
	for(int l=2; l<=n; ++l)
	{
		for(int i=1; i<=n-l+1; ++i)
		{
			int j=i+l-1;
			w[i][j]=1000000;
			for(int k=i; k<=j-1; ++k)
			{
				int q=w[i][k]+w[k+1][j]+m[i-1]*m[k]*m[j];
				if(q<w[i][j])
					w[i][j]=q;
			}
		}
	}
	return w[1][n];
}
int main()
{
	int n;
	int col[200], row[200];
	vector<int> m;
	while(cin>>n)
	{
		int count=0;
		for(int i=0; i<n; ++i)
			cin>>row[i]>>col[i];
		for(int i=0; i<n; ++i)
		{
			for(int j=0; j<n; ++j)
			{
				if(row[i]==col[j])
					if(i!=j)
						count++;
			}
		}
		if(count==0)
			cout<<"invalid argument"<<endl;
		else
		{
			for(int i=0; i<n; ++i)
			{
				m.push_back(row[i]);
				m.push_back(col[i]);
			}
			for(int i=1; i<m.size(); ++i)
			{
				if(m[i-1]==m[i])
					m.erase(m.begin()+i);
			}
			for(int i=0; i<m.size(); ++i)
				cout<<m[i]<<" ";
			cout<<endl;
			cout<<fun(m)<<endl;
			m.clear();
		}
	}
	return 0;
}


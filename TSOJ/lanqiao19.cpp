#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(int x, int y)
{
	return (x>y)?x:y;
}
int main()
{
	int n;
	while(cin>>n)
	{
		vector<int> a;
		int b;
		for(int i=0; i<n; i++)
		{
			cin>>b;
			a.push_back(b);
		}
		int m, l, r, k;
		cin>>m;
		int c[1000]={0};
		for(int i=0; i<m; i++)
		{
			int num=0;
			int temp;
			cin>>l>>r>>k;
			for(int j=l-1; j<r; j++)
				c[num++]=a[j];
			for(int p=0; p<num; p++)
			{
				for(int q=p; q<num; q++)
				{
					if(c[p]<c[q])
					{
						temp=c[q];
						c[q]=c[p];
						c[p]=temp;
					}
				}
			}
			cout<<c[k-1]<<endl;
		}
	} 
	return 0;
}


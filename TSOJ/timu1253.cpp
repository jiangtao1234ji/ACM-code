#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		string name[n];
		int a1, b1, c1, d1;
		vector<int> a;
		vector<int> b;
		for(int i=0; i<n; i++)
		{
			cin>>name[i]>>a1>>b1>>c1>>d1;
			a.push_back(a1);
			b.push_back(b1+c1+d1);
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(b[i]>b[j])
				{
					int temp1=b[i];
					b[i]=b[j];
					b[j]=temp1;
					string temp2=name[i];
					name[i]=name[j];
					name[j]=temp2;
					int temp3=a[i];
					a[i]=a[j];
					a[j]=temp3;
				}
			}
		}
		for(int i=0; i<5; i++)
			cout<<name[i]<<" "<<a[i]<<" "<<b[i]<<endl;
	}
	return 0;
}


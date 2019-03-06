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
		vector<int> a;
		vector<string> b;
		vector<int> c;
		vector<string> d;
		int a1, c1;
		string b1;
		string d1;
		for(int i=0; i<n; i++)
		{
			cin>>a1>>b1>>c1>>d1;
			a.push_back(a1);
			b.push_back(b1);
			c.push_back(c1);
			d.push_back(d1);
		}
		for(int i=0; i<n; i++)
		{
			if(b[i]=="China")
			{
				int temp1, temp2;
				b[i].swap(b[n-1]);
				
				temp1=a[i];
				a[i]=a[n-1];
				a[n-1]=temp1;
				
				temp2=c[i];
				c[i]=c[n-1];
				c[n-1]=temp2;
				
				d[i].swap(d[n-1]);
				break;
			}
		}
		for(int i=1; i<n-1; i++)
		{
			for(int j=i; j<n-1; j++)
			{
				if(b[i-1]>b[j])
				{
					int temp1, temp2;
					b[i-1].swap(b[j]);
					
					temp1=a[j];
					a[j]=a[i-1];
					a[i-1]=temp1;
					
					temp2=c[j];
					c[j]=c[i-1];
					c[i-1]=temp2;
					
					d[i-1].swap(d[j]);
				}
			}
		}
		for(int i=0; i<n; i++)
		{
			cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<d[i]<<endl;
		}
	}
	return 0;
}


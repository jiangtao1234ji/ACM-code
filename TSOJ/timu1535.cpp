#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#define maxn 510

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		while(n--)
		{

			string a, c;
			cin>>a;
			c = a;
			char b, d;
			int b1, d1;
			cin>>b>>d;
			for(int i=0; i<a.length(); ++i)
			{
				if(a[i] == b)
					b1 = i;
				if(a[i] == d)
				{
					d1 = i;
					break;
				}
			}
			reverse(a.begin()+b1, a.begin()+d1+1);
			cout<<a<<endl;
			a.clear();
		}
	}
	return 0;
}


#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		while(n--)
		{
			int a, b;
			cin>>a>>b;
			for(int i=1; ; ++i)
			{
				if(i%2==1)
				{
					if(a - i < 0)
					{
						cout<<"A"<<endl;
						break;
					}
					else
						a -= i;
				}
				else
				{
					if(b - i < 0)
					{
						cout<<"B"<<endl;
						break;
					}
					else
						b -= i;
				}
			}
		}
	}
	return 0;
}


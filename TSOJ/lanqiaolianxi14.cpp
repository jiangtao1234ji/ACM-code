#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a, b, c;
	for(int a=1; a<=3; a++)
		for(int b=1; b<=3; b++)
		{
			if(a!=b)
			{
				for(int c=1; c<=3; c++)
				{
					if(a!=c&&b!=c)
						if(a!=1&&c!=1&&c!=3)
							cout<<a<<b<<c;
				}
			}
		}

	return 0;
}


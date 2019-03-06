#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int x, y;
	for(x=1; x<50; x++)
	{
		for(y=x+1; y<50; y++)
		{
			if((23*x+19*y)==823)
			{
				cout<<x<<" "<<y<<endl;
			}
		}
	}
	return 0;
}


#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a, b, c;
	//1 ≥œ µ   0 Àµª—
	//(a&&a+b+c==2)          (b&&a+b+c==1)        (c&&a+b+c==1)
	//(!a&&a+b+c!=2)         (!b&&a+b+c!=1)       (!c&&(a+b+c!=1)
	for(int a=0; a<2; a++)
	{
		for(int b=0; b<2; b++)
		{
			for(int c=0; c<2; c++)
			{
				if(((a&&a+b+c==2)||(!a&&a+b+c!=2))&&((b&&a+b+c==1)||(!b&&a+b+c!=1))&&((c&&a+b+c==1)||(!c&&(a+b+c!=1))))
					cout<<a<<b<<c;
			}
		}
	}
	return 0;
}


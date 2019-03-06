#include<iostream>
#include<string>
#include<algorithm>
#define PI 3.14159265358979323

using namespace std;

int main()
{
	int r;
	while(cin>>r)
	{
		printf("%.7f\n", PI*r*r);
	}
	return 0;
}


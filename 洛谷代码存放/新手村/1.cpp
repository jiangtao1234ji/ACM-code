#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a;
	double mon;
	cin>>a;
	if(a<=150)
		mon = a*0.4463;
	else if(a > 150 && a<=400)
		mon = 66.945+(a-150)*0.4663;
	else
		mon = 66.945+116.575+(a-400)*0.5663;
	printf("%.1lf", mon);
	return 0;
}


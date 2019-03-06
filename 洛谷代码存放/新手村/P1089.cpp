#include<iostream>
#include<string>
#include<algorithm>
#define m 300

using namespace std;

int main()
{
	int a[20], sum=0, s, flag = 1;
	for(int i=0; i<12; ++i)
		cin>>a[i];
	for(int i=0; i<12; ++i)
	{
		s = m - a[i];
		if(s>=0 && s<100)
			a[i+1] -= s;
		else if(s < 0)
		{
			cout<<"-"<<i+1<<endl;
			flag = 0;
			break;
		}
		else if(s >= 100)
		{
			sum += (s/100)*100;
			s = s - (s/100)*100;
			a[i+1] -= s;
		}
	}
	if(flag)
		cout<<1.2*sum+s<<endl;
	return 0;
}


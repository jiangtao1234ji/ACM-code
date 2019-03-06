#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	string n;
	while(cin>>n)
	{
		int sum = 0, j=1;
		for(int i=0; i<12; i++)
		{
			if(n[i] == '-')
				continue;
			sum+=(n[i] - '0')*j++;
		}
		if((n[12] - '0') == sum%11 || (sum%11==10&&n[12] =='X'))
			cout<<"Right"<<endl;
		else
		{
			for(int i=0; i<12; i++)
				cout<<n[i];
			if(sum%11 == 10)
				cout<<"X"<<endl;
			else
				cout<<sum%11<<endl;
		}
	}
	return 0;
}


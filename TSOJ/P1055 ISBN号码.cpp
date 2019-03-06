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

		n.erase(n.begin()+1);
		n.erase(n.begin()+4);
		int sum = 0;
		for(int i=1; i<=9; i++)
		{
			sum+=(n[i-1] - '0')*i;
		}
		if(n[10] - '0' == sum%11)
			cout<<"Right"<<endl;
		else
		{
			cout<<n[0]<<"-"<<n[1]<<n[2]<<n[3]<<"-";
			for(int i=4; i<9; i++)
				cout<<n[i];
			cout<<"-"<<sum%11<<endl;
		}
	}
	return 0;
}


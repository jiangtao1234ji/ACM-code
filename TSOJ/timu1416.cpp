#include<iostream>
using namespace std;
int Cun[1000][1000];
int s(int,int);
int n;
int main()
{
	int n,count;
	while(cin>>n)
	{
		count=s(0,n);
		cout<<count<<endl;
	}

	return 0;
}

int s(int now,int left)
{
	int sum=0;
	for(int i=now; i<=left; ++i)
	{
		int Znow=i+1;
		int Zleft=left-Znow;
		if(Zleft==0) sum=(sum+1);
		else if(Zleft>0)
		{
			if(Cun[Znow][Zleft])
				sum=(sum+Cun[Znow][Zleft]);
			else sum=(sum+s(Znow,Zleft))%100001;
		}
	}
	Cun[now][left]=sum;
	return sum%100001;
}


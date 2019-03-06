#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a;
	for(int i=n; i>=0; i--)
	{
		cin>>a;
		if(a)
		{ 
            if(i!=n&&a>0)cout<<"+";
            if(abs(a)>1||i==0)cout<<a;
            if(a==-1&&i)cout<<"-";
            if(i>1)cout<<"x^"<<i;
            if(i==1)cout<<"x";
        }
	}
	return 0;
}


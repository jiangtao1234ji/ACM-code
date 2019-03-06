#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	string a;
	while(cin>>a)
	{
		int count=0;
		string b;
		for(int i=0; i<a.size(); i++)
		{
			if(a[i]=='g')
				count++;
			if(a[i]=='u')
				count++;
			if(count==2)
			{
				if(a[i+1]=='a')
					count++;
				if(count==3)
					b+="0";
				else
					b+="1";
				count=0;
			}
		}
		int sum=0;
		for(int i=b.size()-1, j=0; i>=0, j<b.size(); i--, j++)
		{
			if(b[i]=='1')
				sum+=pow(2,j);
		}
		cout<<sum<<endl;
	}
	return 0;
}


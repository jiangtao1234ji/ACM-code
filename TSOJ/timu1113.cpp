#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int a[1001]= {0};
	int n;
	vector<int> b;
	while(1)
	{
		cin>>n;
		if(n!=-1)
			b.push_back(n);
		else
			break;
	}
	for(int i=0; i<b.size(); i++)
	{
		a[b[i]]+=1;
	}
	for(int i=0; i<1001; i++)
		if(a[i]!=0)
			cout<<i<<" "<<a[i]<<endl;
	return 0;
}


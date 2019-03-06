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
		if(sqrt(a[0]-a[1])==1&&sqrt(a[1]-a[2])==1&&sqrt(a[2]-a[3])==1&&sqrt(a[3]-a[4])==1)
			count+=5;
		if(a[0]==a[1]&&a[1]==a[2])
		{
			if(a[1]==a[2]&&a[2]==a[3])
				count+=6;
			else
				count+=3;
		}
		if(a[1]==a[2]&&a[2]==a[3])
			count+=3;
		if(a[0]==a[1]&&a[2]==a[3])
			count+=1;
		if(a[0]==a[2]&&a[1]==a[3])
			count+=1;
		for(int i=0; i<4; i++)
		{
			if(a[i]=='6')
				count+=1;
			if(a[i]=='8')
				count+=1;
			if(a[i]=='9')
				count+=1;
		}
		cout<<count<<endl;
	}
	return 0;
}


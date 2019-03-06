#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int count=0;
		
		for(int i=0; i<n; i++)
		{
			int a[3];
			char b[3];
			scanf("%d %c %d %c %d", &a[0], &b[0], &a[1], &b[1], &a[2]);
			if(a[0]+a[1]==a[2])
				count++;
		}
		if(count==n)
			cout<<"Accepted"<<endl;
		else
			cout<<"Wrong Answer"<<endl;		
	}
	return 0;
}


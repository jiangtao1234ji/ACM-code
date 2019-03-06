#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int l, m, j;
	int c[100001]={0};
	while(cin>>l>>m)
	{
		int a, b, sum=0;
		for(int i=0; i<m; i++)
		{
			cin>>a>>b;
			 for(j=a; j<=b; j++)
                c[j]=1;
		}
		for(int i=0; i<=l; i++)
        {
            if(c[i]==0)
           	 sum++;
        }
        cout<<sum<<endl;
	}
	return 0;
}


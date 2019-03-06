#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int f(int *a,int *b)
{
	int i,j;
	bool s[6000];
	int flage=1;
	memset(s,true,sizeof(s));
	for(i=1; i<=2000; i++)
	{
		while(flage)
		{
			if(s[flage])
			{
				a[i]=flage;
				s[flage]=false;
				break;
			}
			flage++;
		}
		b[i]=a[i]+i;
		s[b[i]]=false;
	}
	return 0;
}

int main()
{
	int a[2001],b[2001],n;
	int i,j;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	f(a,b);
	while(scanf("%d",&n)==1)
	{
		printf("%d/%d\n",a[n],b[n]);
	}
	return 0;
}

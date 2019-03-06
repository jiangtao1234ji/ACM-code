#include <iostream>
#include <algorithm>
#include <string.h>
#include <cassert>
int mul(int a,int x)
{
	int result;
	result=x*a;
	return result;
}
void add(const char * str1,const char * str2)
{
	assert(str1!=NULL&&str2!=NULL);

	int  cstr1=strlen(str1);
	int cstr2=strlen(str2);
	int maxLen=max(cstr1,cstr2)+1;
	int * res=new int[maxLen]();
	int minLen=min(cstr1,cstr2);
	int k=0;
	int i=cstr1-1,j=cstr2-1 ;
	for (; i>=0&&j>=0; i--,j--)
	{
		res[k]=str1[i]-'0'+str2[j]-'0';
		k++;
	}

	while (i>=0)
		res[k++]=str1[i--]-'0';

	while(j>=0)
		res[k++]=str2[j--]-'0';
	for (int m=0; m<maxLen-1; m++)
	{
		res[m+1]+=res[m]/10;
		res[m]=res[m]%10;
	}
	k=maxLen-1;
	while(res[k]==0)
		k--;
	char * ans=new char[maxLen];
	int m=k,n=0;
	for (; m>=0; m--,n++)
	{
		ans[n]=res[m]+'0';
	}
	ans[n]='\0';
	cout<<ans<<endl;
}
void main()
{
	int Fn[10010];
	int n[30], a, b, p, q, i;
	int  j, m;
	while(scanf("%d %d %d %d", &a, &b, &p, &q)!=EOF)
	{
		Fn[0]=p;
		Fn[1]=q;
		scanf("%d", &m);
		for(i=0; i<m; i++)
		{
			scanf("%d", &n[i]);
			if(n[i]==1)
			{
				printf("%d", Fn[0]);
			}
			if(n[i]==2)
			{
				printf("%d", Fn[1]);
			}
			if(n[i]>2)
			{
				for(j=2; j<=n[i]; j++)
				{
					char h[200],k[200];
					int g[200], y[200];
					g[j-2]=mul(Fn[j-2],a);
					y[j-1]=mul(Fn[j-1],b);
					ltoa(g[j-2],h[200],10);
					ltoa(y[j-1],k[200],10);
					Fn[j]=add(&k[200],&h[200]);

				}
			}
			printf("%d", Fn[n[i]-1]);
			printf(" ");
		}
		printf("\n");
	}
}

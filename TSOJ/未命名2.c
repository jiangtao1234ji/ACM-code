#include<stdio.h>
#include<string.h>
#define N 1005
int main()
{
	int  j, m;
	int Fn[10010];
	int n[30], a, b, p, q, i;
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
					Fn[j]=add(mul());
				}
			}
			printf("%d", Fn[n[i]-1]);
			printf(" ");
		}
		printf("\n");
	}
}
int add(char str1[N],char str2[N]  )
{
	int num1[N],num2[N],t,len1,len2,i,j,max;
	while(t--)
	{
		memset(str1,0,sizeof(str1));
		memset(str1,0,sizeof(str2));
		memset(num1,0,sizeof(num1));
		memset(num2,0,sizeof(num2));
		len1=strlen(str1);
		len2=strlen(str2);
		max=len1>len2?len1:len2;
		j=0;
		for(i=len1-1; i>=0; i--)
		{
			num1[j]=str1[i]-'0';
			j++;
		}
		j=0;
		for(i=len2-1; i>=0; i--)
		{
			num2[j]=str2[i]-'0';
			j++;
		}
		for(i=0; i<max; i++)
		{
			num2[i]+=num1[i];
			if(num2[i]>=10)
			{
				num2[i]-=10;
				num2[i+1]+=1;
			}
		}
		if(num2[max]==1)
			printf("%d",num2[max]);

		for(i=max-1; i>=0; i--)
			printf("%d",num2[i]);
		printf("\n");
	}
	return 0;
}

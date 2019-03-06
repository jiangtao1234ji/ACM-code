#include<stdio.h>
#include<string.h>
int main()
{
	char a[50], b[50];
	int c[50]={0}, d[50]={0};
	int i, j, num=1, num1=0, max, l;
	while(scanf("%c", &a[0])!=EOF)
	{
		for(i=1;; i++)
		{
			scanf("%c", &a[i]);
			if(a[i]=='\n') break;
			num++;
		}
		for(i=0;; i++)
		{
			scanf("%c", &b[i]);
			if(b[i]=='\n') break;
			num1++;
		}
		max=(num>num1)?num:num1;
		l=max;
		for(i=0; i<num; max--, i++)
		{
			c[max]=a[num-1-i]-'0';
		}
		for(i=0, max=l; i<num1; max--, i++)
		{
			d[max]=b[num1-1-i]-'0';
		}
		for(i=l; i>=0; i--)
		{
			c[i]+=d[i];
			if(c[i]>=10)
			{
				c[i]-=10;
				c[i-1]++;
			}
		}
		if(c[0]!=0)
		{
			for(i=0; i<=l; i++) printf("%d",c[i]);
		}
		else
		{
			for(i=1; i<=l; i++) printf("%d",c[i]);
		}
		printf("\n");
		num=1;
		num1=0;
		memset(c,0,sizeof(c));
		memset(d,0,sizeof(d));
	}
}

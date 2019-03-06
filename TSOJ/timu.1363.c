#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define M 200
int add(char str1[], char str2[]);
int mul1(char a[], int n, int m);
char Fn[10010];
int main()
{
	char str1[M], str2[M];
	int n[30], a, b, p, q;
	int  i, j, m;
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
				printf ("%d", Fn[0]);
			}
			if(n[i]==2)
			{
				printf("%d", Fn[1]);
			}
			if(n[i]>2)
			{
				for(j=2; j<=n[i]; j++)
				{
					str1=mul1(Fn,a,j-2);
					str2=mul1(Fn,b,j-1);
					add(str1,str2);
				}
			}
		}
		printf("\n");
	}
}
int add(char str1[], char str2[])
{
	int c[M]= {0}, d[M]= {0};
	int i, j, num, num1, max, l;
	num=strlen(str1);
	num1=strlen(str2);
	max=(num>num1)?num:num1;
	l=max;
	for(i=0; i<num; max--, i++)
	{
		c[max]=str1[num-1-i]-'0';
	}
	for(i=0, max=l; i<num1; max--, i++)
	{
		d[max]=str2[num1-1-i]-'0';
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
	printf(" ");
}
int mul1(char a[], int n, int m)
{
	int b[M]={0};
	int i, num, l;
	int *p;
	num=strlen(a);
	l=num;
	for(i=0; i<num; l--, i++)
	{
		b[l]=a[m-i]-'0';
	}
	l=num;
	for(i=l; i>=0; i--)
	{
		b[i]*=n;
		if(b[i]>=10&&b[i]<=19)
		{
			b[i]-=10;
			b[i-1]+=1;
		}
		else if(b[i]>=20&&b[i]<=29)
		{
			b[i]-=20;
			b[i-1]+=2;
		}
		else if(b[i]>=30&&b[i]<=39)
		{
			b[i]-=30;
			b[i-1]+=3;
		}
		else if(b[i]>=40&&b[i]<=49)
		{
			b[i]-=40;
			b[i-1]+=4;
		}
		else if(b[i]>=50&&b[i]<=59)
		{
			b[i]-=50;
			b[i-1]+=5;
		}
		else if(b[i]>=60&&b[i]<=69)
		{
			b[i]-=60;
			b[i-1]+=6;
		}
		else if(b[i]>=70&&b[i]<=79)
		{
			b[i]-=70;
			b[i-1]+=7;
		}
		else if(b[i]>=80&&b[i]<=89)
		{
			b[i]-=80;
			b[i-1]+=8;
		}
	}
	p=b;
	return p;	
}


#include<stdio.h>
#include<string.h>
#define N 200
void main()
{
	char s1[N],s2[N];
	int a[N]= {0},b[N]= {0},l1,l2,c,k,i;
	gets(s1);
	gets(s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1<l2) k=l2;
	else k=l1;
	c=k;
	for(i=0; i<l1; k--,i++)
		a[k]=s1[l1-1-i]-'0';
	for(k=c,i=0; i<l2; k--,i++)
		b[k]=s2[l2-1-i]-'0';

	printf("\n");
	for(i=c; i>=0; i--)
	{
		a[i]+=b[i];
		if(a[i]>=10)
		{
			a[i]-=10;
			a[i-1]++;
		}

	}
	printf("此两数相加之和为：");
	if(a[0]!=0)
	{
		for(i=0; i<=c; i++) printf("%d",a[i]);
	}
	else
	{
		for(i=1; i<=c; i++) printf("%d",a[i]);
	}
	printf("\n");

}

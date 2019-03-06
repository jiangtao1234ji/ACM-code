#include <stdio.h>
#include <string.h>
int aa(unsigned int i ,int x);
int main()
{
	int p,r,i,a;
	char n[10];
	while(1)
	{
		scanf("%d %d %s",&p,&r,n);
		if(p==0) break;
		a=strlen(n);
		for(i=0; i<a; i++)
		{
			if(n[i]<='9')
				n[i]-='0';
			else
				n[i]=n[i]-'A'+10;
		}
		long sum=0;
		for(i=0; i<a; i++)
			sum=sum*p+n[i];
		aa(sum,r);
		printf("\n");
	}
	return 0;
}
int aa(unsigned int i ,int x)
{
	int t;
	t=i%x;
	if(i/x>0)
		aa(i/x,x);
	if(t>=10)
		putchar(55+t);
	else
		printf("%d",t);
}

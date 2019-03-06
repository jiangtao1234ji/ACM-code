#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,t;
	char s[100];
	char n;
	while(gets(s))
	{
		j=0;
		scanf("%c",&n);
		t=strlen(s);
		for(i=0; i<t; i++)
		{
			if(s[i]==n)
				j++;
		}
		printf("%d\n",j);
		gets(s);
	}
	return 0;
}


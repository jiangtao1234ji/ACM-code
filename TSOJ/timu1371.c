#include<stdio.h>
int main()
{
	char a[2];
	int i=0;
	while(scanf("%c", &a[0])!=EOF)
	{
		if(a[0]=='0')
		{
			if(i==0)
				i=0;
			else if(i==1)
				i=2;
			else if(i==2)
				i=1;
		}
		else
		{
			if(i==0)
				i=1;
			else if(i==1)
				i=0;
			else if(i==2)
				i=2;
		}
		while((a[1]=getchar())!='\n')
		{
			if(a[1]=='0')
			{
				if(i==0)
					i=0;
				else if(i==1)
					i=2;
				else if(i==2)
					i=1;
			}
			else
			{
				if(i==0)
					i=1;
				else if(i==1)
					i=0;
				else if(i==2)
					i=2;
			}
		}
		if(i==0)
		{
			printf("yes\n");
		}
		else 
		{
			printf("no\n");
		}
		i=0;
	}
	return 0;
}


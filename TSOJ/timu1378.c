#include<stdio.h>
int x[1000100];
char b[1000100];
int main()
{
	int l, a, i;
	while(scanf("%d %d", &l, &a)!=EOF)
	{
		for(i=0; i<a; i++)
		{
			scanf("%d %c", &x[i], &b[i]);
		}
		for(j=0; ; j++)
		{
			for(i=0; i<a; i++)
			{
				if(b[i]=='L')
				{
					x[i]=x[i]-0.5;
				}
				if(b[i]=='R')
				{
					x[i]=x[i]+0.5;
				}
			}
			for(i=0; i<a; i++)
			{
				if(x[i]!=-1)
				{

					if(x[i]==x[i+1])
					{
						if(b[i]=='L')
						{
							b[i]='R';
							x[i]=x[i]+0.5;
						}
						else
						{
							b[i]='L';
							x[i]=x[i]-0.5;
						}
						if(b[i+1]=='L')
						{
							b[i+1]='R';
							x[i+1]=x[i+1]+0.5;
						}
						else
						{
							b[i+1]='L';
							x[i+1]=x[i+1]-0.5;
						}
					}
				}
				if(x[i]==0||x[i]==l)
				{
					x[i]=-1;
				}
			}

		}






	}


}

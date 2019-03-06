#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, w, s, k, j;
	char a[65][20]={0};
	while(scanf("%d", &n)!=EOF)
	{
		for(i=0; i<n; i++)
			scanf("%s",a[i]);
		scanf("%d,%d",&w,&s);
		j=w-2;
		for(i=0; i<n; i++)
		{
			for(k=0; k<s; k++)
			{
				j++;
				if(j>=n)
					j%=n;
				if(a[j][18]==1)
				{
					k--;
					continue;
				}
				else
					continue;
			}
			printf("%s\n",a[j]);
			a[j][18]=1;
		}
		memset(a,0,sizeof(a));	
	}
	return 0;
}

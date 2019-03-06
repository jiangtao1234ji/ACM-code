#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a, i, j, count=0, num=0, min, d=0, m;
	char b[100], c[100], b1[100]= {0}, c1[100]= {0};
	while(scanf("%d", &a)!=EOF)
	{
		getchar();
		for(m=0; m<a; m++)
		{
			j=0;
			for(i=0;; i++)
			{
				scanf("%c", &b[i]);
				if(b[i]=='\n') break;
				count+=1;
			}
			for(i=0;; i++)
			{
				scanf("%c", &c[i]);
				if(c[i]=='\n') break;
				num+=1;
			}
			for(i=0; i<count; i++)
			{
				if(b[i]!=' ')
				{
					b1[j++]=b[i];
				}
			}
			j=0;
			for(i=0; i<num; i++)
			{
				if(c[i]!=' ')
				{
					c1[j++]=c[i];
				}
			}
			min=(num>count)?count:num;
			for(i=0; i<min; i++)
			{
				if(b1[i]==c1[i]||abs(b1[i]-c1[i])==32)
				{
					d+=1;
				}
			}
			if(d==min)
			{
				printf("YES\n");
			}
			else printf("NO\n");
			count=0;
			num=0;
			d=0;
			memset(b,0,sizeof(b));
			memset(c,0,sizeof(c));
			memset(b1,0,sizeof(b1));
			memset(c1,0,sizeof(c1));
		}
	}
	return 0;
}

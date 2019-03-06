#include<stdio.h>
int main()
{
	int b[70010], d[70010]= {0}, ans=0, i, num=1, j=0, l;
	char c[70010];
	while(scanf("%d", &b[0])!=EOF)
	{
		for(i=1;; i++)
		{
			c[i-1]=getchar();
			if(c[i-1]=='\n') break;
			scanf("%d", &b[i]);
			num++;
		}
		if(num==2&&c[0]=='*') ans=b[0]*b[1];
		else if(num==2&&c[0]=='/'&&b[1]!=0) ans=b[0]/b[1];
		if(i==2)printf("%d\n",ans);
		if(i>2)
		{
			for(i=0; i<num; i++)
			{
				if(c[i]=='*')
				{
					if(j==0)
					{
						d[j]=b[i]*b[i+1];
						j++;
					}
					else
					{
						d[j]=b[i]*b[i+1];
						j++;
					}
					for(l=i; l<num; l++)
					{
						if(c[l+1]=='*')
						{
							d[j-1]*=b[l+2];
						}
					}
				}
				if(c[i]=='/'&&b[i+1]!=0)
				{
					if(j==0)
					{
						d[j]=b[i]/b[i+1];
						j++;
					}
					else
					{
						d[j]=b[i]/b[i+1];
						j++;
					}
					for(l=i; l<num; l++)
					{
						if(c[l+1]=='/'&&b[l+1]!=0)
						{
							d[j-1]/=b[l+2];
						}
					}
				}
			}
			for(i=0; i<num; i++)
			{
				if(c[i]=='+')
				{
					if(i==0)
					{
						ans=b[0]+b[1];
					}
					else
					{
						ans+=b[i];
					}
				}
				else if(c[i]=='-')
				{
					if(i==0)
					{
						ans=b[0]-b[1];
					}
					else
					{
						ans-=b[i];
					}
				}
			}
			j=0;
			while(d[j]!=0)
			{
				ans+=d[j];
				j++;
			}
			printf("%d\n",ans);
		}
		num=1;
		ans=0;
		j=0;
	}
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, a, b, c, d, e, m;
	long sum, ans;
	while(scanf("%d", &n)!=EOF)
	{
		for(i=0; i<n; i++)
		{
			scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
			if(d-a==1)
			{
				if(a==(1||3||5||7||8||10||12))
				{
					sum=31-b+e;
				}
				if(a==2)
				{
					sum=28-b+e;
				}
				if(a==(4||6||9||11))
				{
					sum=30-b+e;
				}
			}
			else if(d==a)
			{
				sum=e-b;
			}
			else if(d-a>1)
			{
				while(d!=a)
				{
					d--;
					switch(d)
					{
						case 11:
							sum+=30;
							break;
						case 10:
							sum+=31;
							break;
						case 9:
							sum+=30;
							break;
						case 8:
							sum+=31;
							break;
						case 7:
							sum+=31;
							break;
						case 6:
							sum+=30;
							break;
						case 5:
							sum+=31;
							break;
						case 4:
							sum+=30;
							break;
						case 3:
							sum+=31;
							break;
						case 2:
							sum+=28;
							break;
						case 1:
							sum+=31;
							break;
						case 0:
							sum+=d;
							break;
					}
				}
				if(a==(1||3||5||7||8||10||12))
				{
					sum=sum+(31-b+e);
				}
				if(a==2)
				{
					sum=sum+(28-b+e);
				}
				if(a==(4||6||9||11))
				{
					sum=sum+(30-b+e);
				}
			}
			ans=c*pow(2,sum);
			printf("%ld\n", ans);
		}
	}
}




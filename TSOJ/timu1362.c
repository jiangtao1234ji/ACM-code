#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, i, j, m, count=0, num=0;
	while(scanf("%d %d", &a, &b)!=EOF)
	{
		for(i=a; i<=b; i++)
		{
			m=sqrt(i);
			for(j=2; j*j<i; j++)
			{
				if(i%j==0)
				{
					count+=1;
				}
				if(count>=2)
					break;
			}
			if(count==1)
			{
				num+=1;
				if(i==m*m)
					num-=1;
			}
			count=0;

		}
		printf("%d\n", num );
		num=0;
	}
	return 0;
}

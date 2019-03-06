#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,m,n,t;
	double x,s;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		m=a+b;
		n=a+c;
		t=b+c;
		if(m>c&&n>b&&t>a)
		{
			x=(a+b+c)/2.0;
			s=sqrt(x*(x-a)*(x-b)*(x-c));
			printf("%.4lf\n",s);
		}
		else
		{
			printf("0\n");
		}
	}
}

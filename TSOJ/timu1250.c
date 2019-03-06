#include <stdio.h>
int main()
{
	double a, b, c;
	int d;
	while(scanf("%lf %lf", &a, &b)!=EOF)
	{
		c=a*b;
		d=(int)c/1;
		printf("%.5lf\n",c-d);
	}
	return 0;
}

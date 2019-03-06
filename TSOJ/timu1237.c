#include<stdio.h>
int main()
{
	double a, b;
	long long c;
	while(scanf("%lf %lf", &a, &b)!=EOF)
	{
		if(a<b)
			printf("0\n");
		else 
			printf("%.0lf\n", a/b);
	}
	return 0;
}

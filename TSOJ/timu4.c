#include<stdio.h>
#include<math.h>
int main()
{
	int a[10], b[10];
	int i, j;
	for(i=0, j=0; i<10, j<10; i++, j++)
	{
		scanf("%d %d", &a[i], &b[j]);
		printf("%d\n",(int)pow(a[i],b[j])%10);
	}
	return 0;
}


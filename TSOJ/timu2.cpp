#include<stdio.h>
long int m;
void answer()
{
	long int n, a, b;
	long int sum=0;
	long int i, j, k;
	long int L[10000],R[10000];
	printf("����������: \n");
	for( i=1,j=1; i<=m, j<=m; i++,j++)
	{
		scanf("%d %d", &L[i], &R[j]);
	}
	printf("������Ҫ��ѯ������:\n");
	scanf("%d %d", &a, &b);
	for( i=1,j=1; i<=m, j<=m; i++,j++)
	{
		if ((R[j]<a)||(L[i]>b))
		{

		}
		else if((L[i]<=a)&&(R[j]>=b))
		{
			sum+=(b-a+1);
		}
		else if((L[i]>=a)&&(R[j]<=b))
		{
			sum+=(R[j]-L[i]+1);
		}
		else if((L[i]>=a)&&(R[j]>=b))
		{
			sum+=(b-L[i]+1);
		}
		else if((L[i]<=a)&&(R[j]<=b))
		{
			sum+=(R[j]-a+1);
		}
	}
	printf("����������:%d\n", sum);
}
int main()
{
	int n;
	printf("�����뻨�������ʹ���:\n");
	while(scanf("%d %d", &n, &m)!=EOF)
	{
		answer();
	}
	return 0;
}



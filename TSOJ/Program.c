/*���дһ������fun,���Ĺ�����:�������¹�ʽ��PI(3.14)��ֵ(Ҫ�����㾫��0.005,��ĳ��С��0.005ʱֹͣ����)��
PI/2=1+1/3+1*2/(3*5)+1*2*3/(3*5*7)+1*2*3*4/(3*5*7*9)+��+1*2*3*��*n/(3*5*7*��*(2n+1))
�������к�,������뾫��0.0005,��������3.141106
ע��:����Դ����������¡�
����Ķ�main���������������е��κ�����,���ں���fun�Ļ�����ע���������������д��������䡣 �������: */
#include <stdio.h>
#include <math.h>
double fun(double eps)
{
	/************Begin**************/
	double pi=1,a=1;
	int i;
	for(i=1; a>=eps; i++)
	{
		a=a*i/(2*i+1);
		pi=pi+a;
	}
	return 2*pi;



	/************End**************/
}
int main()
{
	double x;
	FILE *wf,*in;
	printf("Input eps: ");
	scanf("%lf",&x);
	printf("\neps=%lf,PI=%lf\n",x,fun(x));
	/******************************/
	in=fopen("in43.dat","r");
	wf=fopen("out43.dat","w");
	fscanf(in,"%lf",&x);
	fprintf (wf,"%lf",fun(x));
	fclose(in);
	fclose(wf);
	/*****************************/
	return 0;
}

/*请编写一个函数fun,它的功能是:根据以下公式求PI(3.14)的值(要求满足精度0.005,即某项小于0.005时停止迭代)。
PI/2=1+1/3+1*2/(3*5)+1*2*3/(3*5*7)+1*2*3*4/(3*5*7*9)+…+1*2*3*…*n/(3*5*7*…*(2n+1))
程序运行后,如果输入精度0.0005,则程序输出3.141106
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号注释语句中填入所编写的若干语句。 试题程序: */
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

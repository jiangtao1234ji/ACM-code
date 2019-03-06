#include<stdio.h>
int fun2(int);
int i=0;
int main()
{
	int i= 5;
	fun2(i/2);
	printf("i=%d\n", i);
}
int fun2(int)
{
	i=i<=2?5:0;
	return (i);

}

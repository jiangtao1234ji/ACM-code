#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#define maxn 100000

using namespace std;

long long az[maxn], bz[maxn];

bool isPrime(int num)
{
	if(num==2 || num==3)
	{
		return true;
	}
	if(num%6!=1 && num%6!=5)
	{
		return false;
	}
	int tmp = (int)sqrt(num);
	for(int i=5; i<=tmp; i+=6)
	{
		if(num%i==0 || num%(i+2)==0)
		{
			return false;
		}
	}
	return true;
}


long long printPrimeFactor(long long n, long long *az)
{
	long long factor=2;
	long long i =0;
	while (factor <= n)
	{
		if (n % factor == 0)
		{
			n = n / factor;
			az[i++] = factor;
		}
		else
		{
			factor++;
		}
	}
	return i;
}

int main()
{
	long long a, b, lena, lenb;
	cin>>a>>b;
	int a1, b1;
	a1 = isPrime(a);
	b1 = isPrime(b);
	if(a1&&b1)
	{
		if(a!=b)
			cout<<"1"<<endl;
	}
	else if(a1 || b1)
	{

	}
	else
	{
		lena = printPrimeFactor(a, az);
		lenb = printPrimeFactor(b, bz);
	}

	return 0;
}


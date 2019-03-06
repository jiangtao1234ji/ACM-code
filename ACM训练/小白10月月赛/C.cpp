#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#define maxn 1000000

using namespace std;

long long az[maxn], bz[maxn], ans[maxn], ans1[maxn];

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


long long PrimeFactor(long long n, long long *az)
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
		else
			cout<<"1 "<<a<<endl;
	}
	else if(a1 || b1)
	{
		if(a1 == 1)
		{
			if(b1%a1 == 0)
				cout<<"1 "<<a<<endl;
			else
				cout<<"1"<<endl;
		}
		else
		{
			if(a1%b1 == 0)
				cout<<"1 "<<b<<endl;
			else
				cout<<"1"<<endl;
		}
	}
	else
	{
		lena = PrimeFactor(a, az);
		lenb = PrimeFactor(b, bz);
		int k = 0;
		for(int i=0; i<lena; i++)
		{
			for(int j=0; j<lenb; j++)
			{
				if(az[i] == bz[j])
					ans[k++] = az[i]; 
			}
		}
		int m = 0;
		for(int i=0; i<k; i++)
		{
			for(int j=0; j<k; j++)
			{
				ans1[m++] = ans[i]*ans[j];
			}
		}
		sort(ans1,ans1+m);
		for(int i=0; i<m; i++)
		{
			if(ans[i]!=ans[i+1])
				cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


#include <cstdio>
#include<iostream>
#include <cstring>
#define N 500

using namespace std;

char c[N];

void BigAddBig(char *a,char *b)
{
	int i,j,lena,lenb,k;
	int x[N],y[N],z[N];
	memset(x,0,sizeof(x));
	memset(y,0,sizeof(y));
	memset(z,0,sizeof(z));
	memset(c,0,sizeof(c));
	lena = strlen(a),lenb = strlen(b);

	for(i=0; i<lena; i++)
		x[i] = a[lena-1-i] - '0';
	for(i=0; i<lenb; i++)
		y[i] = b[lenb-1-i] - '0';

	for(i=0; i<lenb; i++)
	{
		z[i] = x[i] + y[i] + z[i];
		z[i+1] = z[i+1] + z[i]/10;
		z[i] = z[i]%10;
	}
	k  = lenb;
	while(z[k]) k++;
	for(i=0; i<k; i++)
		c[i] = z[k-1-i] + '0';
}

int main()
{
	char  fib[N][N];
	int i,a,b,p,q,m;
	memset(fib,0,sizeof(fib));
	while(cin>>a>>b>>p>>q)
	{
		strcpy(fib[1],"p");
		strcpy(fib[2],"q");
		cin>>m;
		int n[m];
		for(int j=0; j<m; j++)
		{
			cin>>n[j];
		}
		sort(n,n+j);
		for(i=3; i<=n[m-1]; i++)
		{
			BigAddBig(fib[i-2],fib[i-1]);
			strcpy(fib[i],c);
		}
	}
	return 0;
}
